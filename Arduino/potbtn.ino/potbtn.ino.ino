int a=0;
void setup (){
   pinMode(A0,INPUT);              
   pinMode(3,OUTPUT);             
   Serial.begin(9600);
   pinMode(7,INPUT);
}

void loop (){
  int buton=digitalRead(7);
  int pot = analogRead (A0);      
  pot=map(pot,0,1023,0,255);
  if(buton==HIGH){ a++; }
  if(a==1){ analogWrite(3, pot); }
  if(a==2){ a=0; }
  while(buton==HIGH){ buton=digitalRead(7); delay(50); }
}
