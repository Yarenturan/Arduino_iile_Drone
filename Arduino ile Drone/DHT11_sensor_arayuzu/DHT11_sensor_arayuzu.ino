#include<Servo.h> // Servo kütüphanesini ekeldik. Servo motorları gibi motorları kontrol eder.
#include<dth.h>  //DTH  kütüphanesini ekledik. Sıcaklık ve nem değerlerini okur
dth DTH; // tanımlama yaptık.
int DTH11_PIN=10; // hangi pine bağladığımızı yazdık.
String voice; // Değişken tanımladık. Ses komutlarını kontrol eder.
void setup() {
  Serial.begin(9600); // Seri portu başlattık.
}

void loop() {
 int chk = DTH.read11(DTH11_PIN); //dth komutunu okuma işlemi yaptık.
 Serial.print("Sıcaklık: "); // Seri ekrana yazdıma yaptık.
 Serial.println(DTH.temperature); // Sıcaklık verisini okuması için gönderdik.
 Serial.print("Nem= "); // Seri ekrana yazdıma yaptık.
 Serial.println(DTH.humidity); // Nem verisini okuması için gönderdik.
 delay(1000); // 1 saniye bekledik.
}
