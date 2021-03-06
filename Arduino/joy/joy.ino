int xPin = A0; 
int yPin = A1; 
int butonPin = 2; 

int r=7;
int g=6;
int b=5;
 
int xPozisyon=0;
int yPozisyon=0;
int butonDurum;

void setup() {
Serial.begin(9600);
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
pinMode(butonPin, INPUT_PULLUP);
pinMode(r, OUTPUT);pinMode(g, OUTPUT);pinMode(b, OUTPUT);
 
}
void loop() {
xPozisyon = analogRead(xPin);
yPozisyon = analogRead(yPin);
butonDurum = digitalRead(butonPin);
 
Serial.print("X Pozisyonu: ");
Serial.print(xPozisyon);
Serial.print(" | Y Pozisyonu: ");
Serial.print(yPozisyon);
Serial.print(" | Buton Durum: ");
Serial.println(butonDurum);
delay(100);



  if (xPozisyon > 1000){
  digitalWrite(g,1);
  digitalWrite(r,1);
  digitalWrite(b,0);
  }
  if (xPozisyon < 10){
  digitalWrite(g,1);
  digitalWrite(r,0);
  digitalWrite(b,1);
  }
  if (yPozisyon > 1000){
  digitalWrite(g,0);
  digitalWrite(r,1);
  digitalWrite(b,1);
  }
  if (yPozisyon < 10){
  digitalWrite(g,0);
  digitalWrite(r,0);
  digitalWrite(b,1);
  }
  if(butonDurum == 0){
  digitalWrite(g,1);
  digitalWrite(r,1);
  digitalWrite(b,1);
  }
}
