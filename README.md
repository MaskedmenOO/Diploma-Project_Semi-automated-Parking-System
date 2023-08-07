# Diploma-Project_Semi-automated-Parking-System
The following code was used for my Diploma Project. Youtube Link : https://youtu.be/1N0b3VP3fA8

The code was made by Chee Kah Wai.

The Diploma Project uses a total of 4 stepper motors. In the original plans it would have used 9 stepper motors. Due to budget issues, my supervisor was willing to compromise and let my team just build 1 platform for each floor. The 2nd floor uses two motors while the 1st and 3rd floor uses one motor each. 

As the Arduino can only control one CNC shield which only controls 3 stepper motors that can move independently, I had to use 2 Arduinos to control 2 stepper motors each.

The stepper motors are controlled by the joysticks. Based on the position of the joystick, a certain value is it's output. Therefore, when the joystick is in between a certain value, the stepper motor will either turn clockwise or anticlockwise which causes the scissor lift in the parking platform to move. 
