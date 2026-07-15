# Line Follower Bot

so this is my line follower robot, built it for competition and it actually won first place at TechnoXian. because of that im now representing Egypt at the world competition in Thailand which is insane to me

![1.png](/Images/r1.jpeg)
![1.png](/Images/r2.jpeg)

## what it is

a robot that follows a line using a sensor array under it and PID control to stay centered on the line. it can handle straights and sharp turns without losing the line. also has bluetooth so i can change the PID values live instead of reuploading code every single time i want to test something, which saved me so much time

## why i built it

wanted to actually understand PID instead of just copy pasting code from somewhere. looked at a bunch of existing line followers first, found one that used an Arduino Pro Mini with sensor calibration and liked that idea so i built my own version around it from scratch

## what's on it

- Arduino Pro Mini as the brain
- DRV8835 motor driver for the two motors
- QTR-8RC 8 channel line sensor array
- HC-05 bluetooth module for tuning
- 7.4V battery + voltage regulator to step it down to 5V
- power switch and some buttons

final PID values ended up being Kp=0.02, Ki=0, Kd=0.6 after a LOT of testing

## how i built it

started with research, watched tutorials on PID and read up on other line followers. then did the schematic, arduino + motor driver + sensor array + bluetooth + power stuff all wired together. had a bunch of errors at first, went through it connection by connection until it was clean

after that moved to PCB. had footprint issues, fixed those, then laid everything out and routed it. checked it like 3 times for unconnected nets and bad spacing before i was happy with it. added mounting holes so it screws into the body properly

did the 3D model around the PCB, made a spot for the sensor to sit low and aligned with the ground, and a little support to hold the battery so it doesnt move around while its driving

before the PCB even came in i breadboarded everything to test it. checked the arduino uploads fine, HC05 connects, both motors spin both directions on the driver, all 8 sensor channels give readings, regulator puts out a clean 5V. found some wiring mistakes doing this which was good bc caught them early

once the PCB arrived i soldered everything on, checked it over for bridges and bad orientation, used a multimeter to check power/ground before turning it on for the first time. then flashed the first test code to make sure everything talked to each other

![1.png](/Images/p1.png)

![1.png](/Images/p4.png)

![1.png](/Images/s1.png)


## 3D model stuff

![1.png](/Images/f1.png)

![1.png](/Images/f2.png)
## zine

made a zine for this project too, its in the repo

![1.png](/Magazine/Magazine%20of%20Line%20follower%20bot.png)

## results

first place at TechnoXian. now heading to the world competition in Thailand to represent Egypt

## made by

Ziad u can call me Zizo too if u want 
