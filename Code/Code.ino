#include "RTClib.h"
RTC_DS1307 rtc;
void setup() {
 rtc.begin(); //initialise RTC
 pinMode(13,OUTPUT);
}
void loop() {
 DateTime now = rtc.now(); //read time
 if(now.second()<30){ //flash D13 LED once per minute
 digitalWrite(13,LOW); //off
 }else{
 digitalWrite(13,HIGH); //and on
 }
}

#include <SPI.h>
#include <SD.h> // replace with SDFAT

// Use character arrays etc


File f;
void setup() {
 Serial.begin(9600); //for debugging info
 SD.begin(10); //CS on pin 10;
 f=SD.open("data.txt",FILE_READ); //open file for reading
 while(f.available()){ //if there is data left in f
 Serial.write(f.read()); //read it and display it
 }
 f.close(); //then close the file
}
void loop() {
}
