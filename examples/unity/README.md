1. Copy and paste everything into the Unity project.
2. Add Example.cs to an object in the scene. Run the scene.
3. Go to https://mocap.robotrebellion.xyz/capture.
4. Select WebSocket Mode, Unity and connect.
5. Now the values are available in Unity.

To include the library
```
using MPMoCap;
```

Start the server and set the port
```
server = new MPMoCapServer();
server.StartServer(9912);
```

Blendshapes, Head Rotation and Eye Rotation are available as float arrays.
```
server.blendshapes
server.headRotation
server.leftEyeRotation
server.rightEyeRotation
```

Helper array are available for blendshape orders
```
int jawOpenIndex = Array.IndexOf(MPMoCapServer.blendshapeNames, "jawOpen");
```

These libraries are included in this plugin for websocket communication and OSC decoding.
- https://github.com/frankiezafe/VVVVUnityOSC
- https://github.com/sta/websocket-sharp

