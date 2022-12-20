#include <Adafruit_NeoPixel.h>

#define trigPin 10
#define echoPin 9 
#define PIN 6

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(10, PIN, NEO_GRB + NEO_KHZ800);

void setup()

{
pixels.begin();
pixels.show(); 
Serial.begin (9600); 
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
}

void loop()

{
int duration, distance; 
digitalWrite(trigPin, HIGH); 
delayMicroseconds(500); 
digitalWrite(trigPin, LOW); 
duration = pulseIn(echoPin, HIGH); 
distance = (duration/2) / 29.1; 

  if (distance < 50) // distancia en cms
    {

    rojo();
    delay (3000); 
    verde(); 

  }
  Serial.print(distance); 
  Serial.println(" CM"); 
  delay(500); 
}

void rojo() {

  pixels.setPixelColor(0,255,0,0);
  pixels.show();

  pixels.setPixelColor(1,255,0,0);
  pixels.show();

  pixels.setPixelColor(2,255,0,0);
  pixels.show();

  pixels.setPixelColor(3,255,0,0);
  pixels.show();

  pixels.setPixelColor(4,255,0,0);
  pixels.show();

  pixels.setPixelColor(5,255,0,0);
  pixels.show();

  pixels.setPixelColor(6,255,0,0);
  pixels.show();

  pixels.setPixelColor(7,255,0,0);
  pixels.show();

  pixels.setPixelColor(8,255,0,0);
  pixels.show();

  pixels.setPixelColor(9,255,0,0);
  pixels.show();


}

void verde() {

  pixels.setPixelColor(0,0,255,0);
  pixels.show();

  pixels.setPixelColor(1,0,255,0);
  pixels.show();

  pixels.setPixelColor(2,0,255,0);
  pixels.show();

  pixels.setPixelColor(3,0,255,0);
  pixels.show();

  pixels.setPixelColor(4,0,255,0);
  pixels.show();

  pixels.setPixelColor(5,0,255,0);
  pixels.show();

  pixels.setPixelColor(6,0,255,0);
  pixels.show();

  pixels.setPixelColor(7,0,255,0);
  pixels.show();

  pixels.setPixelColor(8,0,255,0);
  pixels.show();

  pixels.setPixelColor(9,0,255,0);
  pixels.show();

}

