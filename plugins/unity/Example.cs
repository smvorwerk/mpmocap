using UnityEngine;
using System;
using MPMoCap;

public class Example : MonoBehaviour
{
    MPMoCapServer server;

    void Start()
    {
        // Start two servers on different ports
        server = new MPMoCapServer();
        server.StartServer(9912);
    }

    // Update is called once per frame
    void Update()
    {
        //using the helper array to get index by blendshape name
        int jawOpenIndex = Array.IndexOf(MPMoCapServer.blendshapeNames, "jawOpen");
        //getting the value of the blendshape
        float jawOpenValue = server.blendshapes[jawOpenIndex];
        Debug.Log("jawOpen: " + jawOpenValue);
    }

    void OnDestroy()
    {
        // stop the servers on play mode exit
        // since normally unity with resets everything on play anyway
        server.StopServer();
    }
}
