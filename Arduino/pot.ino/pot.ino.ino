int pot=A0;
int oku,son;
int cikis=A5;

void setup(){
  pinMode(pot,INPUT);
  pinMode(cikis,OUTPUT);
  Serial.begin(9600);
}

 void loop(){
  oku=analogRead(pot);
  Serial.println(oku);
  son=map(oku,0,1023,0,255);
  analogWrite(7,son);
}
