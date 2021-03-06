#include "DS3231.h"
#include <Wire.h>

RTClib saat;

DS3231 Clock;

void setup () {
  
    Serial.begin(9600);
    Wire.begin();

    Clock.setYear(21);
    Clock.setMonth(03);
    Clock.setDate(05);
    Clock.setHour(00);
    Clock.setMinute(10);
    
}

void loop () {
  
    delay(1000);
  
    DateTime now = saat.now();
    
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();

}
