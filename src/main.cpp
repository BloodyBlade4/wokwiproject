#include <Arduino.h>
#include "HDC302x.h" 

// put function declarations here:
int myFunction(int, int);

HDC302x hdc = HDC302x();


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("starting Main file");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  Serial.println("testing");
}