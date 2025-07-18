//Arduino 2        - receiver chan 8 signal pin
//Arduino 4        - IN4
//Arduino 5~       - IN3
//Arduino 7        - IN2
//Arduino 8        - IN1
//Arduino 10~      - gyro servo 
//Arduino 11~      - servo door signal
//Arduino sda/scl  - MPU6050
//Arduino A4/A5    - sda/scl pca9685

#include <Servo.h>
#include <GY6050.h>           
#include <Wire.h>

int pos=0;
int num1;
double chan;
int num;
Servo servo1;

Servo servogyro;
int X = 0;
int Y = 0;
GY6050 gyro(0x68);

void setup() {
  pinMode(2,INPUT);
  servo1.attach(11);  
  Serial.begin(9600);
  servo1.write(pos);

  Wire.begin();            
  gyro.initialisation();
  delay(100);
  servogyro.attach(10);
  num1 = 1200;
}

void loop() 
{
  chan=pulseIn(2, HIGH);
  Serial.println(chan);
  X = map(gyro.refresh('A', 'X'), -90, 90, 0, 180);               
  Y = map(gyro.refresh('A', 'Y'), -90, 90, 0, 180);
  servogyro.write(Y);                                         
  delay(15);
  
  if (chan >num1)
   {
 servogyro.attach(10);
 servo1.write(90);
 delay(15);
   }
 
 if (chan <num1)
  {
  servo1.write(0);
  servogyro.detach();
  }
 }  
