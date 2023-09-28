// Bluetooth modeli kullanarak Arduino'nun 13. pinine led bağlayarak kontrol etmek.
 int pin=13;
 char veri=0; //Alınan verileri depoladık.

void setup() {
  Serial.begin(9600);  // Seri portu çalıştırmaya başladık.
  pinMode(13,OUTPUT); // 13. pini çıkış olarak atadık.
}

void loop() {
  if(Serial.available()>0)
  veri:
  {
    veri=Serial.read(); // Gelen verileri okuyup depolar.
  data
    Serial.print(veri); // Seri monitöre veriyi yazdırdık.
  monitor
    Serial.print("\
    ");
        if(veri=='1')
          digitalWrite(13,HIGH); // Eğer veri 1 e eşitse led yansın.
        else if()
        digitalWrite(13,LOW); // led sönsün.
  }

}
