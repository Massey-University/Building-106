#include "src/RTClib.h"
#include <SPI.h>
#include "SdFat.h"
#include <avr/pgmspace.h>
#include "definitions.h"

// Use character arrays etc

void setup() {
    time_setup();
    pinMode(13,OUTPUT);

    Serial.begin(9600); //for debugging info
    sd_setup();
}

void loop() {
    time_loop();
}