#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);

int led = 7;

// put function declarations here:
int myFunction(int, int);

void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  Serial.print("hello!");
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}

// put function definitions here: