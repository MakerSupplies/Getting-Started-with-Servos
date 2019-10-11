/* BasicServo
 *  Description: Basic code to control the position of a servo motor
 *  Author: Ryan Tang
 *  License: The MIT License
 *  Copyright (c) 2019 MakerSupplies Singapore
*/


#include <Servo.h>

#define servoPin 2
Servo servoMotor;  //Creates a Servo object

void setup() {
  servoMotor.attach(servoPin); //Attaches the pin to the servo object
}

void loop() {
  
  servoMotor.write(0); //Sends a signal for the servo to go to the 0 degrees position
  delay(3000);
  servoMotor.write(180); //Sends a signal for the servo to go to the 180 degrees position
  delay(3000);

}
