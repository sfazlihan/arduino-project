#include "Servo.h"

Servo servo;

void setup(){
  servo.attach(3);
}

void loop(){
  for(int i=0; i<=180; i=i+10){
    servo.write(i);
    delay(100);
    if(i>=180){
      servo.write(0);
      delay(500);
    }
  }
}