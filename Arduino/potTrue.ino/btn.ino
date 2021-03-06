int buton=5;
int say=0;
int durum=0;
int led=3;
int pot=A5;

void setup(){
    pinMode(buton,INPUT);
    pinMode(led,OUTPUT);
    pinMode(pot,INPUT);
    Serial.begin(9600);
}

void loop(){
    durum=digitalRead(buton);
    pot=analogRead(pot);
    pot=map(pot,0,1024,0,255);
    if(durum==HIGH){
      say++;
    }
    if(say==1){
      digitalWrite(led,pot);
      say=0;
    }
    while(){
      durum=digitalRead(buton);
      delay(50);
    }
}
