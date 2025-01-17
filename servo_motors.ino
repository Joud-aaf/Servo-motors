#include <Servo.h>

int x1 = 0;  //Declare several needed variables
int x2 = 0;
int x3 = 0;
int x4 = 0;
int x5 = 0;
int x6 = 0;
  
Servo motor1;   //Declare servo motor and name it motor1
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;
Servo motor6;

void setup(){
motor1.attach(7);  //set each motor to its portpin (from7 to 12)
motor2.attach(8); 
motor3.attach(9);
motor4.attach(10);
motor5.attach(11);
motor6.attach(12);
}

void loop(){
x1 = analogRead(A0);        //x1 is taking its value through port A0
x1 = map(x1,0,1023,0,179);  //mapping potentiometer as analog read from (0 to 1023) to understand it as angle from (0 to 179)
motor1.write(x1);           // move motor1 to value of x1
delay(10);                  // wait a little

x2 = analogRead(A1);
x2 = map(x2,0,1023,0,179);
motor2.write(x2);
delay(10);

x3 = analogRead(A2);
x3 = map(x3,0,1023,0,179);
motor3.write(x3);
delay(10);

x4 = analogRead(A3);
x4 = map(x4,0,1023,0,179);
motor4.write(x4);
delay(10);

x5 = analogRead(A4);
x5 = map(x5,0,1023,0,179);
motor5.write(x5);
delay(10);

x6 = analogRead(A5);
x6 = map(x6,0,1023,0,179);
motor6.write(x6);
delay(10);}
