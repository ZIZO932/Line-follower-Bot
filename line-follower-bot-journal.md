# Line follower Bot — Journal Export

- Exported at: 2026-07-15T06:11:32Z
- Project ID: 4428
- Entries: 8

## Entry 1
- ID: 13294
- Author: Ziad
- Created At: 2026-06-11T19:24:27Z

### Content

I spent the first part of the session searching for line followers that were made before to understand different designs and features that people use I looked at several projects and compared their approaches

After that I watched a few tutorials about PID control because I wanted to understand how it is used in line followers and how it helps the robot stay on the line more accurately I took some notes about how the proportional integral and derivative terms affect the movement

While searching I found a line follower project that used an Arduino Pro Mini and had a calibration feature for the sensors I liked the idea because it makes the robot easier to tune and adapt to different surfaces so I decided to develop something similar and build on that concept

Once I had a clear idea of the direction I wanted to take I started working on the schematic I began selecting the main components and placing them in the design and started thinking about how everything would connect together

By the end of the session I had a better understanding of PID control found a reference design that inspired me and made a good start on the schematic for the project
![Screenshot 2026-06-11 222310.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzE0NDQsInB1ciI6ImJsb2JfaWQifX0=--377e48d1ea600c187f1a5544df57f1c734ff9028/Screenshot 2026-06-11 222310.png)


### Recording Links

- https://lookout.hackclub.com/api/media/1ee6c6aa-5176-49f8-a314-ec5035d8cf9c/video.mp4
- https://lookout.hackclub.com/api/media/26d9dfbe-337a-4e05-9a73-93e6f61128a3/video.mp4

## Entry 2
- ID: 13342
- Author: Ziad
- Created At: 2026-06-12T01:35:30Z

### Content

Today I worked on building the full schematic for my line follower project and moving into the PCB stage

I started by placing and connecting all the components that I planned to use in the design I used an Arduino Pro Mini as the main controller and connected a DRV8835 motor driver to control the two motors I added the QTR 8RC line sensor array for line detection and also added an HC05 module so I can communicate with the robot wirelessly

For power I added a 7 4V battery connector a voltage regulator to step the voltage down to 5V and a switch to control powering the system on and off I also added the motor connectors buttons for interaction and all the needed power and ground connections

After connecting everything together I spent time checking the schematic because I started getting errors I went through the connections one by one fixed missing connections corrected labels and solved the schematic issues until everything was working correctly and no errors remained

After finishing the schematic I moved to the PCB stage and generated the board but I found footprint problems with some components so I stopped and checked each part and assigned the correct footprints where needed then updated everything until the errors were solved

Once the footprints were fixed I returned to the PCB editor and started making the basic board design I placed the main components and started arranging them in positions that made sense for routing and for keeping the design compact I also thought about where the sensors motors and power parts should be placed to make the final robot easier to build
![Screenshot 2026-06-12 043354.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzE2MDgsInB1ciI6ImJsb2JfaWQifX0=--00ae79c3ed09cf66eb8f6fe55538d5ff2d6639aa/Screenshot 2026-06-12 043354.png)
![Screenshot 2026-06-12 043515.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzE2MDksInB1ciI6ImJsb2JfaWQifX0=--debb79fe91ba2cac1a1363c3234c8db6c1a6ebd2/Screenshot 2026-06-12 043515.png)


### Recording Links

- https://lookout.hackclub.com/api/media/3d41e46e-c34e-4642-b2f9-95879c4b8c31/video.mp4

## Entry 3
- ID: 14589
- Author: Ziad
- Created At: 2026-06-16T18:13:27Z

### Content

Today I continued working on the line follower project and focused on completing the PCB design and making sure everything was ready for manufacturing

I started by returning to the PCB editor and continued arranging the components and routing the connections between them I adjusted the placement of the Arduino Pro Mini motor driver sensor module power components and connectors to make the layout cleaner and easier to assemble

After finishing the routing I spent time reviewing the entire PCB carefully I checked all electrical connections looked for unconnected nets verified that the traces were connected correctly and made sure the footprints matched the actual components that will be used in the build

I also checked spacing between components and made small adjustments to improve the overall layout and reduce possible issues during assembly I reviewed the power lines and signal routing again to make sure the design was organized and practical

Once everything was finished I ran final checks on the PCB and confirmed that no errors remained By the end of the session I completed the PCB design and verified that all parts and connections were correct so the project is now ready for the next stage
![Screenshot 2026-06-16 210753.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzQ1OTYsInB1ciI6ImJsb2JfaWQifX0=--d4215b99358ffb5e3ac0a0411ade9df2de7cec73/Screenshot 2026-06-16 210753.png)


### Recording Links

- https://lookout.hackclub.com/api/media/ba944d98-a3b4-4ada-8503-a037b5b4fc95/video.mp4

## Entry 4
- ID: 16007
- Author: Ziad
- Created At: 2026-06-21T20:19:43Z

### Content

Today I continued working on the line follower project and focused on completing the PCB design and improving the 3D model for the robot structure

I started by finishing the PCB design and making the final mechanical adjustments I added mounting holes to the PCB so it can be fixed securely to the robot using screws and made sure the hole positions fit with the planned structure and component placement

After completing the PCB I moved to the 3D model and continued developing the mechanical design I finished positioning the line sensor in its intended location while considering alignment and accessibility for line detection

I also worked on designing and completing the battery support to hold the battery in place and improve stability during operation I checked the arrangement of the components to make sure everything fits together properly inside the final design

By the end of the session I completed the remaining PCB details and finished important parts of the 3D model including the sensor placement and battery support which moved the project closer to the assembly stage


![Screenshot 2026-06-19 185559.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzgzNTMsInB1ciI6ImJsb2JfaWQifX0=--0160b762d9e5ed11ac06e6ebd6b0dc43bd52b81e/Screenshot 2026-06-19 185559.png)
![Screenshot 2026-06-21 231712.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzgzNTksInB1ciI6ImJsb2JfaWQifX0=--20be15d47fb4db3d4f09d6aeaebcc61116f2988b/Screenshot 2026-06-21 231712.png)
![Screenshot 2026-06-21 231729.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MzgzNjAsInB1ciI6ImJsb2JfaWQifX0=--d4356849ff2cad51465cda1143b5b31154dd857a/Screenshot 2026-06-21 231729.png)


### Recording Links

- https://lookout.hackclub.com/api/media/f1cb6cfb-ea6d-46ac-83e4-986573483a9f/video.mp4
- https://lookout.hackclub.com/api/media/10fad719-669b-4f6e-be91-77cb3ace35ad/video.mp4
- https://lookout.hackclub.com/api/media/7fdac8b6-58dd-4701-bfe3-7248eea1ba46/video.mp4

## Entry 5
- ID: 16607
- Author: Ziad
- Created At: 2026-07-14T17:01:00Z

### Content

so I finished the full 3D assembly for the project I went through all the parts one last time and made sure everything fit together correctly I checked the clearances the mounting points and the overall assembly to make sure it can actually be manufactured and assembled in real life without any problems

After finishing the assembly I reviewed the design again and made a few small adjustments to improve the final model After that I exported the files that I will need later for manufacturing

I also finished working on the zine and completed all the sections that I wanted to include Unfortunately I noticed afterwards that it was not being recorded so I could not log that work separately Because of that I will attach the finished zine to this journal as evidence even though I was not able to create a separate time log for it

![Copy of Magazine Terraskipper (5.83 x 8.27 in).png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEyODcsInB1ciI6ImJsb2JfaWQifX0=--bb1a48624a20bac65ff3ca055f2ce1893e4b0681/Copy of Magazine Terraskipper (5.83 x 8.27 in).png)
![Screenshot 2026-06-25 141215.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEyODgsInB1ciI6ImJsb2JfaWQifX0=--c40bb51ebbb3dcf9ac6c4819be575cf3f2c8ef22/Screenshot 2026-06-25 141215.png)
![Screenshot 2026-06-25 141249.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEyODksInB1ciI6ImJsb2JfaWQifX0=--174f8cb68ac6f103e4d387ceab502a2e4b85295c/Screenshot 2026-06-25 141249.png)


### Recording Links

- https://lookout.hackclub.com/api/media/99444daf-5253-4642-a4bd-067503189e8b/video.mp4

## Entry 6
- ID: 16618
- Author: Ziad
- Created At: 2026-07-15T05:53:16Z

### Content

 I focused on testing the hardware components before receiving the PCB I wanted to make sure that every part was working properly so I would not run into problems later during assembly

I started by checking the Arduino Pro Mini and made sure I could upload code to it without any issues After that I tested the HC05 Bluetooth module and confirmed that it could power on and communicate correctly

I also tested the DRV8835 motor driver with the DC motors to make sure both motors could run in both directions and respond correctly to different commands I checked the QTR 8RC line sensor array and verified that all of the sensors were giving readings and responding when detecting different surfaces

After that I checked the voltage regulator to make sure it was providing a stable 5V output from the battery input I also tested the push buttons battery connector switch and motor connectors to make sure they were all working as expected

During the session I found a few small wiring mistakes while testing on a breadboard and fixed them before testing again I repeated several tests to make sure the results were consistent and that all the components were ready to be soldered once the PCB arrived
![Screenshot 2026-07-15 085233.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMDUsInB1ciI6ImJsb2JfaWQifX0=--817abdcb22e7ee181de2965dc2091a2914432377/Screenshot 2026-07-15 085233.png)


### Recording Links

- https://lookout.hackclub.com/api/media/25004379-5667-42bb-8d1e-cebe58dadb36/video.mp4

## Entry 7
- ID: 16619
- Author: Ziad
- Created At: 2026-07-15T06:01:04Z

### Content

I finally received the PCB and started assembling the robot

I began by soldering all the components onto the PCB I mounted the Arduino Pro Mini the DRV8835 motor driver the HC05 Bluetooth module the voltage regulator the motor connectors the sensor connector the buttons the power switch and the battery connector I took my time while soldering to make sure every joint was clean and secure

After everything was mounted I carefully inspected the whole board I checked the orientation of every component looked for solder bridges and made sure there were no missing connections I also used a multimeter to check the power and ground lines and verified that there were no shorts before powering the board

Once I was confident that everything was assembled correctly I powered the board for the first time and confirmed that the power system was working as expected I also checked that the main components were receiving the correct voltage

After confirming that the hardware was working I started programming the robot I uploaded the first test programs to make sure the Arduino was communicating with the different components correctly I tested the motors the Bluetooth module and the line sensor and made small changes to the code whenever I found something that needed to be adjusted
![1000390317.jpg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMDcsInB1ciI6ImJsb2JfaWQifX0=--043e78d547ae8699f325f1a7b07d0acfdae2c44f/1000390317.jpg)
![1000390318.jpg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMDksInB1ciI6ImJsb2JfaWQifX0=--b084b9692aa97c4a7a4defffb16d5d4f956ebf22/1000390318.jpg)
![1000390936.jpg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMTAsInB1ciI6ImJsb2JfaWQifX0=--dc055112eb8fad4825254635fd8daa86386ee089/1000390936.jpg)


### Recording Links

- https://lookout.hackclub.com/api/media/d4ccbbfd-59cf-4794-949d-e7742fffb375/video.mp4
- https://lookout.hackclub.com/api/media/55a7da6d-a39f-4aa8-835e-d6e05643143c/video.mp4
- https://lookout.hackclub.com/api/media/fe397bda-dc3d-4684-b71f-3ebde869d077/video.mp4
- https://lookout.hackclub.com/api/media/629652fc-53cf-4089-b89f-3d9a751c8d45/video.mp4

## Entry 8
- ID: 16620
- Author: Ziad
- Created At: 2026-07-15T06:08:11Z

### Content

I spent the whole session improving the software for the line follower and testing how it performed

I made a simple test track to use while tuning the robot and started running it over and over again Every time I noticed a problem I stopped changed the code uploaded it again and tested it one more time

Most of the time was spent adjusting the PID values I changed the proportional integral and derivative values little by little to see how each one affected the robot Sometimes the robot reacted too aggressively and sometimes it was too slow so I kept making small changes until the movement became much smoother

I also experimented with different motor speed values I tested higher and lower speeds and checked how they affected the robot while driving through straight sections and sharp turns I wanted to find a balance between speed and stability without causing the robot to lose the line

Throughout the session I repeated this process many times I modified the code uploaded it tested the robot watched how it behaved took notes and made another round of changes I also adjusted a few other parts of the program to improve the overall performance and make the robot respond more consistently
![Screenshot 2026-07-15 090655.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMTEsInB1ciI6ImJsb2JfaWQifX0=--48445f01677e060b316cc501e326a0e2801500e5/Screenshot 2026-07-15 090655.png)
![Screenshot 2026-07-15 090639.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMTIsInB1ciI6ImJsb2JfaWQifX0=--8a7f3745de42af7a00f9b1da7fa8def8d0adf5f6/Screenshot 2026-07-15 090639.png)
![Screenshot 2026-07-15 090606.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEzMTMsInB1ciI6ImJsb2JfaWQifX0=--d3b1df7fbac7847e85938030b6f585e01f62b7fb/Screenshot 2026-07-15 090606.png)


### Recording Links

- https://lookout.hackclub.com/api/media/73483484-4930-4003-b7ce-c868ede543f3/video.mp4
- https://lookout.hackclub.com/api/media/f4cc3b57-285a-4b20-bc28-07faad617c9b/video.mp4
- https://lookout.hackclub.com/api/media/7cdc500a-6e82-4107-9eed-db21b3c7509d/video.mp4
- https://lookout.hackclub.com/api/media/196ba071-f328-4cc7-9da2-fd046845c00c/video.mp4
- https://lookout.hackclub.com/api/media/aef4c62e-057a-4786-b8d6-0f16acbe99f3/video.mp4
