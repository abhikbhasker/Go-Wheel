
#include <SoftwareSerial.h>
SoftwareSerial BtSerial(4,5); // RX | TX
int old=0;
float i=0;
void setup() {
  Serial.begin(9600); // Default communication rate of the Bluetooth module
  BtSerial.begin(9600);
}
void loop() {
 int throttle = 150; // Reads the data from the serial port4
    if(Serial.available()>0){
      int xx=Serial.read();
      for(i=0;i<45;i+=.01){
        BtSerial.write(xx);
      }
    }
    
    
 
}
