# Line Follower Bot

> A PID-tuned competition robot that tracks a line using an 8 channel sensor array and Bluetooth-tunable control

![1000390317.jpg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMDcsInB1ciI6ImJsb2JfaWQifX0=--043e78d547ae8699f325f1a7b07d0acfdae2c44f/1000390317.jpg)
![1000390936.jpg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMTAsInB1ciI6ImJsb2JfaWQifX0=--dc055112eb8fad4825254635fd8daa86386ee089/1000390936.jpg)

---

## What is this?

This is a line follower robot built for competition. It uses an 8 channel line sensor array to detect a track and a PID control loop to stay on it, correcting itself in real time whether the track is straight or curving sharply.

The robot also has Bluetooth built in so the PID values can be tuned live without re-uploading code every time, which made the tuning process a lot faster.

---

## Why I made it

I wanted to build a proper competition-ready line follower and actually understand PID control instead of just copying code. I looked at a few existing designs first, found one that used an Arduino Pro Mini with a sensor calibration feature, and used that as a starting point to build my own version from the schematic up.

---

## Build Process

- Researched existing line follower designs and watched tutorials on PID control to understand how the proportional, integral, and derivative terms affect movement
- Built the full schematic: Arduino Pro Mini as the controller, DRV8835 motor driver for the two motors, QTR-8RC line sensor array, HC-05 Bluetooth module for wireless tuning, plus a 7.4V battery connector, voltage regulator, power switch, and buttons
- Went through the schematic fixing missing connections, wrong labels, and errors until it was clean
- Moved to the PCB stage, fixed footprint mismatches, then laid out and routed the board, arranging the sensors, motors, and power section for a compact and easy-to-assemble layout
- Reviewed the PCB fully: checked every net, verified traces and footprints, adjusted spacing, and reviewed the power and signal routing again before finalizing
- Added mounting holes to the PCB and finished the 3D model, including sensor placement and a battery support to hold it steady during operation
- Finished the full 3D assembly, checked clearances and mounting points, and exported the files for manufacturing
- Bench tested every component on a breadboard before the PCB arrived: uploaded code to the Pro Mini, checked the HC-05 could power on and communicate, ran both motors in both directions on the DRV8835, verified every channel on the QTR-8RC, and confirmed the regulator gave a stable 5V. Found and fixed a few wiring mistakes along the way
- Once the PCB arrived, soldered every component onto it, then inspected the whole board for solder bridges, wrong orientations, and missing connections, checking power and ground with a multimeter before powering it up for the first time
- Uploaded the first test programs to confirm the motors, Bluetooth module, and line sensor were all working together
- Built a test track and spent a full session tuning: adjusted the PID values in small steps, testing after every change, until the robot stopped overreacting or lagging and moved smoothly through both straights and sharp turns. Also tested different motor speeds to balance speed against stability

![Screenshot 2026-07-15 090655.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMTEsInB1ciI6ImJsb2JfaWQifX0=--48445f01677e060b316cc501e326a0e2801500e5/Screenshot 2026-07-15 090655.png)

---

## How it works

**Control system**
- Arduino Pro Mini runs the main logic and PID loop
- DRV8835 motor driver controls both DC motors independently, letting the robot turn by adjusting each side's speed
- PID control (tuned to Kp=0.02, Ki=0, Kd=0.6) keeps the robot centered on the line and handles curves smoothly

**Sensing**
- QTR-8RC 8 channel line sensor array reads the line position under the robot and feeds it into the PID loop
- Sensor readings are calibrated so the robot can adapt to different surfaces and lighting

**Wireless tuning**
- HC-05 Bluetooth module lets me send new PID values to the robot live, so I could tune it on the track without reflashing the code every time

**Power**
- 7.4V battery feeds a voltage regulator that steps it down to a stable 5V for the logic and sensors
- A power switch and battery connector handle on/off control

---

## The PCB

The board is a custom 2-layer PCB that carries the Arduino Pro Mini, DRV8835 motor driver, HC-05 module, voltage regulator, motor and sensor connectors, buttons, and the power switch. It has mounting holes so it can be screwed directly into the robot's body, keeping the wiring clean and the whole thing sturdy during runs.

![Screenshot 2026-06-16 210753.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzQ1OTYsInB1ciI6ImJsb2JfaWQifX0=--d4215b99358ffb5e3ac0a0411ade9df2de7cec73/Screenshot 2026-06-16 210753.png)

---

## The 3D Model

The body was designed around the PCB, sensor array, and battery, with a dedicated mount for the sensor to keep it aligned and close to the ground for reliable line detection, and a support to hold the battery steady during operation.

![Screenshot 2026-06-21 231712.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzgzNTksInB1ciI6ImJsb2JfaWQifX0=--20be15d47fb4db3d4f09d6aeaebcc61116f2988b/Screenshot 2026-06-21 231712.png)
![Screenshot 2026-06-21 231729.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzgzNjAsInB1ciI6ImJsb2JfaWQifX0=--d4356849ff2cad51465cda1143b5b31154dd857a/Screenshot 2026-06-21 231729.png)

---

## Magazine / Zine

A project zine documenting the design process, decisions, and lessons learned is also included in this repo.

![Copy of Magazine Terraskipper (5.83 x 8.27 in).png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEyODcsInB1ciI6ImJsb2JfaWQifX0=--bb1a48624a20bac65ff3ca055f2ce1893e4b0681/Copy%20of%20Magazine%20Terraskipper%20(5.83%20x%208.27%20in).png)

---

## Build Progress

The robot went through several stages from research to a competition-ready build. Some highlights:

- Researched existing line followers and PID theory before starting the schematic
- Built and debugged the full schematic, then moved into PCB layout and routing
- Fixed footprint errors and reviewed the PCB fully before sending it off
- Added mounting holes and finished the 3D model around the PCB, sensor, and battery
- Bench tested every component on a breadboard first, catching wiring mistakes early
- Soldered and assembled the real PCB, verified power and ground with a multimeter before powering on
- Tuned the PID loop live over Bluetooth (final values: Kp=0.02, Ki=0, Kd=0.6) until the robot handled straights and sharp turns smoothly

---

## Made by

Ziad — a competition line follower robot built to learn and apply PID control from the schematic up
