//Mavi ledleri bir değişkene atıyoruz.
int led_mavi1=2;
int led_mavi2=3;
int led_mavi3=4;
//Kırmızı ledleri bir değişkene atıyoruz.
int led_kirmizi1=5;
int led_kirmizi2=6;
int led_kirmizi3=7;
//Yeşil ledleri bir değişkene atıyoruz.
int led_yesil1=8;
int led_yesil2=9;
int led_yesil3=10;

void setup() {
Serial.begin(9600); //Seri haberleşmeyi başlatıyoruz.
for (int pin = 0; pin <= 11; pin++) //0-11 arası pinleri for döngüsü ile çıkış olarak ayarlıyoruz.
 {
    pinMode(pin, OUTPUT);
 }
}

void loop() {
  if(Serial.available()) 
  {
    char gelen_bilgi=Serial.read();

    if(gelen_bilgi=='1') //Gelen bilgi 1 ise mavi ledleri yanıyor.
   {
     digitalWrite(led_mavi1, 1);
     digitalWrite(led_mavi2, 1);
     digitalWrite(led_mavi3, 1);
   }
    else if(gelen_bilgi=='0') //Gelen bilgi 0 ise ledleri sönüyor.
     {
      digitalWrite(led_mavi1, 0); 
      digitalWrite(led_mavi2, 0);
      digitalWrite(led_mavi3, 0);

      digitalWrite(led_kirmizi1, 0);
      digitalWrite(led_kirmizi2, 0);
      digitalWrite(led_kirmizi3, 0);

      digitalWrite(led_yesil1, 0);
      digitalWrite(led_yesil2, 0);
      digitalWrite(led_yesil3, 0);
     }
       else if(gelen_bilgi=='2') //Gelen bilgi 2 ise mavi ledleri yanıyor.
      {
         digitalWrite(led_kirmizi1, 1); 
         digitalWrite(led_kirmizi2, 1);
         digitalWrite(led_kirmizi3, 1);
      }
      else if(gelen_bilgi=='3') //Gelen bilgi 3 ise mavi ledleri yanıyor.
      {
         digitalWrite(led_yesil1, 1);
         digitalWrite(led_yesil2, 1);
         digitalWrite(led_yesil3, 1);
      }

  }
}
