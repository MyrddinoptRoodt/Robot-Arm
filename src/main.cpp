#include <Arduino.h>
#include <Servo.h>


Servo servoBase;  // create servo object to control a servo
Servo servoLeft;  // create servo object to control a servo
Servo servoRight;  // create servo object to control a servo
Servo servoHead;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void MoveServo(int servo, int angle)
{
  switch (servo)
  {
    case 0:
      servoBase.write(angle);
      break;
    case 1:
      servoLeft.write(angle);
      break;
    case 2:
      servoRight.write(angle);
      break;
    case 3:
      servoHead.write(angle);
      break;
    default:
      servoHead.write(angle);
  }
}


#define SERVO_BASE 0
#define SERVO_LEFT 1
#define SERVO_RIGHT 2
#define SERVO_HEAD 3


void setup() {
  servoBase.attach(9);  // attaches the servo on pin 9 to the servo object
  servoLeft.attach(10);  // attaches the servo on pin 10 to the servo object
  servoRight.attach(11);  // attaches the servo on pin 11 to the servo object
  servoHead.attach(6);  // attaches the servo on pin 12 to the servo object
}

void loop() {
  //delay(1000);
  MoveServo(SERVO_HEAD,0);
  delay(1000);
  MoveServo(SERVO_HEAD,180);
  delay(1000);
  MoveServo(SERVO_HEAD,0);
  delay(1000);
  /*MoveServo(9,0);
  delay(1000);
  MoveServo(9,180);
  delay(1000);
  MoveServo(9,0);
  delay(1000);*/
  /*MoveServo(SERVO_BASE,100);
  delay(1000);
  MoveServo(SERVO_BASE,120);
  delay(500);
  MoveServo(SERVO_BASE,100);
  delay(1000);
  MoveServo(SERVO_BASE,80);
  delay(500);
  MoveServo(SERVO_BASE,60);
  delay(500);
  MoveServo(SERVO_BASE,40);
  delay(500);
  MoveServo(SERVO_BASE,20);
  delay(500);
  MoveServo(SERVO_BASE,0);
  delay(500);
  MoveServo(SERVO_BASE,20);
  delay(500);
  MoveServo(SERVO_BASE,40);
  delay(500);
  MoveServo(SERVO_BASE,60);
  delay(500);
  MoveServo(SERVO_BASE,80);
  delay(2000);*/

  

}
