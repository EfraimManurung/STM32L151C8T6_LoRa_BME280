#include <Arduino.h>

//int sensorPin = PA2;    // select the input pin for the potentiometer

//int sensorValue = 0;  // variable to store the value coming from the sensor
#define LED_BUILTIN PC13
#define VCC_ON PA2


void setup() {
  // declare the ledPin as an OUTPUT:
  // pinMode(sensorPin,INPUT);
  // initialize digital pin PB1 as an output.
  pinMode(VCC_ON, OUTPUT);
  digitalWrite(VCC_ON, LOW);
  pinMode(LED_BUILTIN , OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  //sensorValue = analogRead(sensorPin);
  // Serial.print("Analog : ");
  //Serial.println(sensorValue);
    Serial.print("Efraim Partogi");
    // delay(1000);

    digitalWrite(LED_BUILTIN , HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(50);              // wait for a second
    digitalWrite(LED_BUILTIN , LOW);    // turn the LED off by making the voltage LOW
    delay(50);              // wait for a second
}