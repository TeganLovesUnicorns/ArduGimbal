// ArduGimbal 
// main.cpp
// (C) 2020 Daniel Rehbein
// www.danielrehbein.com


/*
Receiving the Data from the UART to toggle the LED
Pinouts 
Pin O6 -> LED 1
Pin 10 -> Rx
Pin 11 -> Tx
*/

// Libraries needed
#include <Arduino.h>
#include <SoftwareSerial.h>
#include <stdlib.h>

// Initalize Serial Communication
SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  // Initalizes LED pin output
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    char num[2];

  //If the data is available serially, then receive it
  if(mySerial.available()>0){
    for(int i= 0 ;i<2;i++){
      num[i] = mySerial.read();
      delay(10);
    }
    
    int x;
    x = atoi(num);

  	//If the data matches, toggles the LED's
    switch(x){
      case 10:
        Serial.println("LED 1 LOW");
        digitalWrite(13,LOW);
        break;
      case 11:
        Serial.println("LED 1 HIGH");
        digitalWrite(13,HIGH);
        break;
      // case 20:
      //   Serial.println("LED 2 LOW");
      //   digitalWrite(7,LOW);
      //   break;
      // case 21:
      //   Serial.println("LED 2 HIGH");
      //   digitalWrite(7,HIGH);
      //   break;
    }
  }
}

//End of the Program
