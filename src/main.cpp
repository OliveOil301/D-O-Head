#include <Arduino.h>
#include <Servo.h>

//*Servo pin definitions-------------------------------------------------------------------------
int headRotationPin = 2;
int headTiltPin = 4;

//*Servo object definitions----------------------------------------------------------------------
Servo headRotationServo;
Servo headTiltServo;

//*Servo min and max definitions----------------------------------------------------------------
int headRotationMin = 544, headRotationMax = 2400;
int headTiltMin = 544, headTiltMax = 2400;

void setup()
{
  // put your setup code here, to run once:

  // Attaching the servo objects to the pin numbers defined above
  // The min and max microseconds for the servos are also defined here
  headRotationServo.attach(headRotationPin, headRotationMin, headRotationMax);
  headTiltServo.attach(headTiltPin, headTiltMin, headTiltMax);
}

void loop()
{
  // Check the serial bus for new lines (commands)
  // If there are some, go through each command and set the intermediate setpoint to the new value
  // If there is a sound command, check if one is playing. if not, start the new sound

  // go though all the setpoints. if the intermediate value is different than the previous one, make the previous one the intermediate one and set the servo(s) to it

  // Adding a comment to check if this is working

  // put your main code here, to run repeatedly:
}