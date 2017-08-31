void sd_setup(){
    SD.begin(10); //CS on pin 10;
    
    f = SD.open("data.txt",FILE_WRITE); //open file for writing
    f.println("Hello World!"); //read it and display it
    f.close(); //then close the file

    f=SD.open("data.txt",FILE_READ); //open file for reading
    
    while(f.available()){ //if there is data left in f
        Serial.write(f.read()); //read it and display it
    }
    f.close(); //then close the file
}