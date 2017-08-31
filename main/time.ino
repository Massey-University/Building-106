void time_setup(){
    rtc.begin(); //initialise RTC
    serial.println(rtc.isrunning());
}

void time_loop(){
    DateTime now = rtc.now(); //read time
   
    snprintf_P(buffer, 79, PSTR("%d\n"), now.totalseconds());
    Serial.print(buffer);
    // digitalWrite(13,LOW);

    delay(1000);
    // digitalWrite(13,HIGH);
    
        // if(now.second()<30){ //flash D13 LED once per minute
        //     digitalWrite(13,LOW); //off
        // }else{
        //     digitalWrite(13,HIGH); //and on
        // }
    
        // Serial.print(now);
}