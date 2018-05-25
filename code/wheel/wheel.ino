#define throttlePin 3

#include <SoftwareSerial.h>
SoftwareSerial BtSerial(4,5); // RX | TX
void setup() {
  pinMode(3,OUTPUT);
  Serial.begin(9600);
  BtSerial.begin(9600);// Default communication rate of the Bluetooth module
}
void loop() {
 if(BtSerial.available() > 0){ // Checks whether data is comming from the serial port
    int throttle = BtSerial.read(); // Reads the data from the serial port
    throttle=throttle*13;
    if(throttle>=255){
    throttle=255;
      
    }
    Serial.println(throttle);
    analogWrite(throttlePin, throttle);
 }
 
}
