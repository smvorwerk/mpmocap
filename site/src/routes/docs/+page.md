## What is MPMoCap?
MPMoCap is an open-source tool that gives you the power to do facial motion capture right in your browser, using the webcam on any mobile device or computer. You can then send the blendshape data, either locally or remotely, to another browser or popular game engines; you even have the option to broadcast the blendshape data through OSC protocol using MPMoCap's cross-platform app.

**MPMoCap is under development with frequent updates. If you encounter issues, ensure you're using the latest version.**

## How does it work?

- **Facial Motion Capture... in Your Browser**

    MPMoCap's motion capture system was built using [Mocap4face](https://github.com/facemoji/mocap4face) and [Google mediapipe](https://github.com/google/mediapipe)'s machine learning model. **No iPhone LiDAR or RGBD camera needed!** The underlying ML code is not fixed and will be updated whenever there is a better model.

- **Streaming Data: Unreal and Unity Support**

    MPMoCap includes custom plugins that fire up WebSocket servers within [Unreal Engine](https://mocap.robotrebellion.xyz/docs/unreal/basic-usage) and [Unity](https://mocap.robotrebellion.xyz/docs/unity/basic-usage), which are used to receive live data from your browser. The plugins also include convenient presets that you can easily use with popular 3D avatars, such as Metahumans and ReadyPlayerMe characters.

- **Streaming Data: Browser to Browser & Browser to OSC App**

    MPMoCap uses WebRTC (the protocol used in video calling) to send data from one browser to another or from a browser to the app. However, no image or video is sent at all. WebRTC also allows for  peer-to-peer secure connection and low latency.
    

- **ARKit Support**

    MPMoCap uses the same blendshapes as ARKit. Check out the [data format page](https://mocap.robotrebellion.xyz/docs/data-format) for more information about the blendshape names and orders.


## How do I use it?
**Disclaimer:** Ensure the browser page remains active during recording.

1. Visit the [capture page](https://mocap.robotrebellion.xyz/capture) and allow the website to access your camera.
2. Select the correct camera, choose the desired frame smoothing, and decide whether to use sensitive motion capture or not.
3. Select one of the two methods to send the captured data:

   - **Local:**
     - Use MPMoCap's custom plugin to send data directly to [Unreal engine](https://mocap.robotrebellion.xyz/docs/unreal/basic-usage) or [Unity](https://mocap.robotrebellion.xyz/docs/unity/basic-usage) using your defined URL and port.
     - Check the [documentation](https://mocap.robotrebellion.xyz/docs) for more information.

   - **Remote:**
     - Click on the 8-character code starting with "p-" (e.g., p-AwCodE) to copy it.
     - To send data to another device (e.g., recording on phone and controlling avatar in Unreal on PC):
       1. Open the [receive page](https://mocap.robotrebellion.xyz/receive) on another device.
       2. Paste the copied 8-character code.
       3. You should now see live streaming data on your device and be able to share it locally.
     - To send data to the MPMoCap App for broadcasting OSC data:
       1. Download and install the [MPMoCap App](https://mocap.robotrebellion.xyz/downloads) for your platform.
       2. Open the app and paste the 8-character code.
       3. The data will now be available in OSC format on your chosen port.

        If everything is correctly connected but no data is showing up, try refreshing the page to generate a new code.

				
## What's next?
Check out other documentation pages. If you are on mobile, press the menu button on the top left.