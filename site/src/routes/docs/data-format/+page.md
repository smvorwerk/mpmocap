## Data format
**All data follows the OSC format.
There are currently 5 channels of data.**
- **/mpmocap/blendshapes**
  
  A float array [52 blendshape values] ranging from 0.0~1.0. 
  
- **/mpmocap/headRotation**
    
   A float array [x,y,z,w] ranging from -1.0 ~ 1.0. 

These are extra eye rotation roughly estimated from the eyeLookAt blendshapes. It's usually not needed since common avatar has eye rotation build in their blendshapes.
- **/mpmocap/leftEyeRotation**

   A float array [x,y,z,w] ranging from -1.0 ~ 1.0.
   
- **/mpmocap/rightEyeRotation**

    A float array [x,y,z,w] ranging from -1.0 ~ 1.0.

All rotations are **quaternions in right-handed, Y-Up, Z-Forward** coordinate system.

<img class="dark:hidden" src="https://github.com/need4steve/mpmocap/blob/main/assets/coordinate-axes-light.png?raw=true" alt="Coordinate axis">
<img class="hidden dark:block" src="https://github.com/need4steve/mpmocap/blob/main/assets/coordinate-axes-dark.png?raw=true" alt="Coordinate axis">

- **/mpmocap/version**

    A string of the current version of MPMoCap website.


## Blendshapes
Easy to copy format :) in order of the data array
```
browInnerUp
browDownLeft
browDownRight
browOuterUpLeft
browOuterUpRight
eyeLookUpLeft
eyeLookUpRight
eyeLookDownLeft
eyeLookDownRight
eyeLookInLeft
eyeLookInRight
eyeLookOutLeft
eyeLookOutRight
eyeBlinkLeft
eyeBlinkRight
eyeSquintLeft
eyeSquintRight
eyeWideLeft
eyeWideRight
cheekPuff
cheekSquintLeft
cheekSquintRight
noseSneerLeft
noseSneerRight
mouthFunnel
mouthPucker
mouthRollUpper
mouthRollLower
mouthShrugUpper
mouthShrugLower
mouthClose
mouthSmileLeft
mouthSmileRight
mouthFrownLeft
mouthFrownRight
mouthDimpleLeft
mouthDimpleRight
mouthUpperUpLeft
mouthUpperUpRight
mouthLowerDownLeft
mouthLowerDownRight
mouthPressLeft
mouthPressRight
mouthStretchLeft
mouthStretchRight
mouthLeft
mouthRight
jawOpen
jawForward
jawLeft
jawRight
tongueOut
```