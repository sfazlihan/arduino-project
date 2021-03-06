#include <Servo.h> 
Servo servoNesnesi; 
int buton = A0;
void setup()
{
  pinMode(buton,INPUT);
  servoNesnesi.attach(9);  
  Serial.begin(9600);
}
 
void loop()
{
  int isik = analogRead(A0);
  delay(50);
  Serial.println(isik);
  servoNesnesi.write(0);
  if (isik < 848                                                                                                                                                                                                                                        
  ){
  servoNesnesi.write(35);  
  delay(125);                                 
  servoNesnesi.write(0);   
  delay(125);                                                                   
  } 
  else{
    servoNesnesi.write(0);   
}   
}
