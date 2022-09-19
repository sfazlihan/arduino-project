#include <IRremote.h>

int IRRPIN = 2;

IRrecv IRR(IRRPIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  IRR.enableIRIn(); // Start the receiver
}

void loop() {
  if (IRR.decode()) {
    Serial.println(IRR.results.value,HEX);
    IRR.resume(); // Receive the next value
  }
  delay(500);
}