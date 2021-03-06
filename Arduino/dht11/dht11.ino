#include "DHT.h"  //Kütüphanemizi ekledik
int dhtPin=2;

DHT  dht(dhtPin,DHT11);   //pin ve modelimizi belirledik
void setup() {
  Serial.begin(9600);
  dht.begin();  //Başlattık
  Serial.println("DHT11 Kullanımı ve Dönüşümleri");
}

void loop() {
  float sicaklik = dht.readTemperature();   //Sıcaklık değerini celcius olarak okuduk.
  float nem = dht.readHumidity();   //Nem değerini okuduk
  Serial.print("Nem Değeri: ");
  Serial.println(nem);
  Serial.print("Celcius Değeri: ");
  Serial.println(sicaklik);
  Serial.print("Fahrenheit Değeri: ");
  Serial.println((sicaklik*1.8)+32);    //C => F işlemi
  Serial.print("Kelvin Değeri: ");
  Serial.println(sicaklik+273.15);    //C => K işlemi
  Serial.print("\n");   //Ekranda okunabilirliği artırmak için boşluk ekledim.
  delay(2000);
}
