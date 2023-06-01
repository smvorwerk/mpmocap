// This websocket server is a modified version of https://github.com/ljason1993/WebSocketServer-unreal


#include "MPMoCapWebSocketServer.h"
#include "Containers/Ticker.h"
#include "IPAddress.h"
#include "IWebSocketNetworkingModule.h"
#include "WebSocketNetworkingDelegates.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>

// Sets default values
AMPMoCapWebSocketServer::AMPMoCapWebSocketServer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMPMoCapWebSocketServer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMPMoCapWebSocketServer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	WebSocketServerTick(DeltaTime);
}


void AMPMoCapWebSocketServer::BeginDestroy()
{
	Super::BeginDestroy();
	Stop();
}

bool AMPMoCapWebSocketServer::Start(int Port)
{
	FWebSocketClientConnectedCallBack CallBack;
	CallBack.BindUObject(this, &AMPMoCapWebSocketServer::OnWebSocketClientConnected);

	Server = FModuleManager::Get().LoadModuleChecked<IWebSocketNetworkingModule>(TEXT("WebSocketNetworking")).CreateServer();

	if (!Server || !Server->Init(Port, CallBack))
	{
		Server.Reset();
		return false;
	}

	return true;
}

void AMPMoCapWebSocketServer::Stop()
{
	if (IsRunning()) {
		Server.Reset();
	}
}

bool AMPMoCapWebSocketServer::WebSocketServerTick(float DeltaTime)
{
	if (IsRunning()) {
		Server->Tick();
		return true;
	}
	else {
		return false;
	}
}

bool AMPMoCapWebSocketServer::IsRunning() const
{
	return !!Server;
}

void AMPMoCapWebSocketServer::OnWebSocketClientConnected(INetworkingWebSocket* Socket)
{
	UE_LOG(LogTemp, Log, TEXT("Websocket client connected"));
	if (ensureMsgf(Socket, TEXT("Socket was null while creating a new websocket connection.")))
	{
		FWebSocketConnection Connection = FWebSocketConnection{ Socket };

		FWebSocketPacketReceivedCallBack ReceiveCallBack;
		ReceiveCallBack.BindUObject(this, &AMPMoCapWebSocketServer::ReceivedRawPacket, Connection.Id);
		Socket->SetReceiveCallBack(ReceiveCallBack);

		FWebSocketInfoCallBack CloseCallback;
		CloseCallback.BindUObject(this, &AMPMoCapWebSocketServer::OnSocketClose, Socket);
		Socket->SetSocketClosedCallBack(CloseCallback);

		Connections.Add(MoveTemp(Connection));
	}
}

void AMPMoCapWebSocketServer::DecodeData(std::string str, std::string delimiter)
{
	int start = 0;
	int end = str.find(delimiter);
	FString address;
	TArray<float> values;
	while (end != -1) {
		std::string s = str.substr(start, end - start);
		if (start == 0) {
			address = FString(s.c_str());
		}
		else {
			float v = atof(s.c_str());
			values.Push(v);
		}
		start = end + delimiter.size();
		end = str.find(delimiter, start);
	}
	std::string s = str.substr(start, end - start);
	float v = atof(s.c_str());
	values.Push(v);
	OnDataCallback(address, values);
}

void AMPMoCapWebSocketServer::ReceivedRawPacket(void* Data, int32 Size, FGuid ClientId)
{
	//UE_LOG(LogTemp, Log, TEXT("Package received with size %i"), Size);
	TArrayView<uint8> dataArrayView = MakeArrayView(static_cast<uint8*>(Data), Size);
	char* c = reinterpret_cast<char*>(dataArrayView.GetData());
	std::string str(c, Size);
	DecodeData(str);
}

void AMPMoCapWebSocketServer::OnSocketClose(INetworkingWebSocket* Socket)
{
	int32 Index = Connections.IndexOfByPredicate([Socket](const FWebSocketConnection& Connection) { return Connection.Socket == Socket; });

	if (Index != INDEX_NONE)
	{
		OnConnectionClosed().Broadcast(Connections[Index].Id);
		Connections.RemoveAtSwap(Index);
	}
}