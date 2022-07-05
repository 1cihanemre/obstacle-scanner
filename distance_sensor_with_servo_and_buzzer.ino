#include <Servo.h>
Servo myservo;
int trigPin=9;
int echoPin=10;
long sure;
long uzaklik;

void setup() {
  myservo.attach(7);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  pinMode(2,OUTPUT);

}

void loop() {
    myservo.write(0);
    delay(500);
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    sure=pulseIn(echoPin,HIGH);
    uzaklik=sure/2/29.154;
  if(uzaklik<10){
    digitalWrite(2,HIGH);
    delay(200);
    digitalWrite(2,LOW);
    Serial.print(uzaklik);
    Serial.println("cm Yakinda Nesne algilandi!\nRotasyon Degistiriliyor!");
    delay(100);
    myservo.write(30);
    delay(500);
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    sure=pulseIn(echoPin,HIGH);
    uzaklik=sure/2/29.154;
    if(uzaklik<10){
      digitalWrite(2,HIGH);
      delay(200);
      digitalWrite(2,LOW);
      Serial.print(uzaklik);
      Serial.println("cm Yakinda Nesne algilandi!\nRotasyon Degistiriliyor!");
      delay(100);
      myservo.write(60);
      delay(500);
      digitalWrite(trigPin,LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin,HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin,LOW);
      sure=pulseIn(echoPin,HIGH);
      uzaklik=sure/2/29.154;
          if(uzaklik<10){
            digitalWrite(2,HIGH);
            delay(200);
            digitalWrite(2,LOW);
            Serial.print(uzaklik);
            Serial.println("cm Yakinda Nesne algilandi!\nRotasyon Degistiriliyor!");
            delay(100);
            myservo.write(90);
            delay(500);
            digitalWrite(trigPin,LOW);
            delayMicroseconds(2);
            digitalWrite(trigPin,HIGH);
            delayMicroseconds(10);
            digitalWrite(trigPin,LOW);
            sure=pulseIn(echoPin,HIGH);
            uzaklik=sure/2/29.154;
              if(uzaklik<10){
                digitalWrite(2,HIGH);
                delay(200);
                digitalWrite(2,LOW);
                Serial.print(uzaklik);
                Serial.println("cm Yakinda Nesne algilandi!\nRotasyon Degistiriliyor!");
                delay(100);
                myservo.write(120);
                delay(500);
                digitalWrite(trigPin,LOW);
                delayMicroseconds(2);
                digitalWrite(trigPin,HIGH);
                delayMicroseconds(10);
                digitalWrite(trigPin,LOW);
                sure=pulseIn(echoPin,HIGH);
                uzaklik=sure/2/29.154;
                if(uzaklik<10){
                  digitalWrite(2,HIGH);
                  delay(200);
                  digitalWrite(2,LOW);
                  Serial.print(uzaklik);
                  Serial.println("cm Yakinda Nesne algilandi!\nRotasyon Degistiriliyor!");
                  delay(100);
                  myservo.write(150);
                  delay(500);
                  digitalWrite(trigPin,LOW);
                  delayMicroseconds(2);
                  digitalWrite(trigPin,HIGH);
                  delayMicroseconds(10);
                  digitalWrite(trigPin,LOW);
                  sure=pulseIn(echoPin,HIGH);
                  uzaklik=sure/2/29.154;
                  if(uzaklik<10){
                    digitalWrite(2,HIGH);
                    delay(200);
                    digitalWrite(2,LOW);
                    Serial.print(uzaklik);
                    Serial.println("cm Yakinda Nesne algilandi!\nRotasyon Degistiriliyor!");
                    delay(100);
                    myservo.write(180);
                    delay(500);
                    digitalWrite(trigPin,LOW);
                    delayMicroseconds(2);
                    digitalWrite(trigPin,HIGH);
                    delayMicroseconds(10);
                    digitalWrite(trigPin,LOW);
                    sure=pulseIn(echoPin,HIGH);
                    uzaklik=sure/2/29.154;
                  }
                  else{
                    Serial.println("10cm yakinda nesne algilanamadi!");
                    Serial.print("En yakin nesne ");
                    Serial.print(uzaklik);
                    Serial.println("cm uzaklikta");
                    delay(1000);
                  }
                }
                else{
                  Serial.println("10cm yakinda nesne algilanamadi!");
                  Serial.print("En yakin nesne ");
                  Serial.print(uzaklik);
                  Serial.println("cm uzaklikta");
                  delay(1000);
                }
              }
              else{
                Serial.println("10cm yakinda nesne algilanamadi!");
                Serial.print("En yakin nesne ");
                Serial.print(uzaklik);
                Serial.println("cm uzaklikta");
                delay(1000);
              }
          }
          else{
            Serial.println("10cm yakinda nesne algilanamadi!");
            Serial.print("En yakin nesne ");
            Serial.print(uzaklik);
            Serial.println("cm uzaklikta");
            delay(1000);
          }
    }
    else{
      Serial.println("10cm yakinda nesne algilanamadi!");
      Serial.print("En yakin nesne ");
      Serial.print(uzaklik);
      Serial.println("cm uzaklikta");
      delay(1000);
    }
    
  }
  else{
    Serial.println("10cm yakinda nesne algilanamadi!");
    Serial.print("En yakin nesne ");
    Serial.print(uzaklik);
    Serial.println("cm uzaklikta");
    delay(1000);
  }
}
