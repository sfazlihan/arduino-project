#include "DS3231.h"
#include <Wire.h>
#include <TM1637.h>
int clk=2;
int dio=3;

TM1637 tm(clk,dio);

RTClib saat;

void setup() {
  Serial.begin(9600);
Wire.begin();   
tm.init();
tm.set(2);
}

void loop() {
DateTime now = saat.now();  
Serial.print(now.hour());
Serial.print(now.minute());
Serial.println(now.second());
    tm.display(0,now.hour());
    tm.display(1,now.hour());
    tm.point(1);
    tm.display(2,now.second());
    tm.display(3,now.minute());

}
