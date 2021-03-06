#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte hop[8] = {
0b00000,
0b00011,
0b00111,
0b11111,
0b11111,
0b00111,
0b00011,
0b00000,

};
byte ses[8] = {
0b11000,
0b00100,
0b10010,
0b01001,
0b01001,
0b10010,
0b00100,
0b11000,

};

void setup() {
lcd.createChar(0, hop);
lcd.createChar(1, ses);
lcd.begin(16,2);
lcd.print("GOOSEBUMPS");
lcd.setCursor(14,1);
lcd.write((uint8_t)0);
lcd.setCursor(15,1);
lcd.write((uint8_t)1);
}

void loop() {

}
