#include <Arduino.h>
#include "HDC302x.h" 

// put function declarations here:
int myFunction(int, int);

HDC302x hdc = HDC302x();


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("starting Main file");
  //Serial.begin(115200);                       // Init the serial device
  if (!hdc.Initialize())      // Did the initialization fail?
    {
        Serial.println("Sorry, cannot find sensor with the selected address"); 
    } 
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  Serial.println("testing");
  /*
    HDC302xDataResult result = hdc.ReadData();  // Calculate the temperature

    Serial.print("Temperature is ");            // Begin printing output
    Serial.print(result.Temperature);           // Print the Temperature
    Serial.print("°C, Humidity is ");           // Print the degrees plus a newline
    Serial.println(result.Humidity);            // Print the Temperature

    delay(5000);                                // Wait 5 seconds
    */
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}