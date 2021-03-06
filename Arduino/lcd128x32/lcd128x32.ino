#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels
#define OLED_RESET 4 // Reset pin # (or -1 if sharing Arduino reset pin)
long duration;
int distance;
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
display.setTextColor(WHITE);
display.clearDisplay();

}
/*display.setCursor(80,17); // col, row
display.println(distance);
display.setTextSize(1);
display.setCursor(97,17); // col, row
display.println("cm");*/
void loop() {
  /*digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  int pot = analogRead(A3);*/
display.setTextSize(2);
display.setCursor(14,14); // col, row
display.println("FAZLIHAN");
display.display();
delay(1000);
display.clearDisplay();
delay(1000);
}
