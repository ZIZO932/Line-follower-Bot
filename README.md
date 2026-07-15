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

##BOM
|Component                                          |Store                |Qty|Unit Price (EGP)|Total (EGP)                    |Total (USD approx)|Link                                                                                                                                     |
|---------------------------------------------------|---------------------|---|----------------|-------------------------------|------------------|-----------------------------------------------------------------------------------------------------------------------------------------|
|Arduino Pro Mini 328 5V/16MHz                      |RAM Electronics      |1  |250             |250                            |4.98              |https://www.ram-e-shop.com/shop/arduino-mini-pro-arduino-pro-mini-328-5v-16mhz-7180                                                      |
|DRV8835 Dual Motor Driver                          |Makers Electronics   |1  |180             |180                            |3.59              |https://makerselectronics.com/product/drv8833-2-channel-dc-motor-driver/?srsltid=AfmBOopl0AXVi_7erC0TRuiovgie-HcAb31S7vhGDk1mQixUt8-UI5Q2|
|QTR-8RC 8 Channel Line Sensor Array                |Micro Ohm Electronics|1  |135             |135                            |2.69              |https://microohm-eg.com/qtr-8rc-8-channel-line-tracker-reflectance-sensor-array/                                                         |
|HC-05 Bluetooth Module (6 pin)                     |RAM Electronics      |1  |200             |200                            |3.98              |https://www.ram-e-shop.com/shop/kit-bluetooth-hc05-normal-hc-05-bluetooth-module-normal-6674                                             |
|7.4V Li-ion Battery Pack 2S-1P 1000mAh w/ BMS + JST|Makers Electronics   |1  |210             |210                            |4.18              |https://makerselectronics.com/product/rechargeable-li-ion-battery-pack-7-4v-2s-1pbms-1000mah-18650-with-jst-cable/                       |
|L7805CV Voltage Regulator 5V/1A TO-220             |Micro Ohm Electronics|1  |6               |6                              |0.12              |https://microohm-eg.com/product/7805-regulator-ic/                                                                                       |
|DPDT Slide Power Switch (ON/ON 6 pin)              |Micro Ohm Electronics|1  |10              |10                             |0.2               |https://microohm-eg.com/on-on-switch-6-pin-pcb-mounted-22mm-dpdt-slide-switch/                                                           |
|Tactile Push Button 12x12x12mm                     |Micro Ohm Electronics|1  |3.5             |3.5                            |0.07              |https://microohm-eg.com/press-12x12x12mm-push-button-switch-4-pin/                                                                       |
|TOTAL                                              |                     |   |                |994.50 (incl. DRV8835 estimate)|19.81             |                                                                                                                                         |


## results

first place at TechnoXian. now heading to the world competition in Thailand to represent Egypt

## made by

Ziad u can call me Zizo too if u want 
