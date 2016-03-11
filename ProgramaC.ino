void ProgramC(){
  STATEBUSY = 1;

  char key = keypad.getKey();

pos1=90;
myservo1.write(pos1);
pos2=60;
myservo2.write(pos2);

STATEM = 0;
digitalWrite(ledPin, LOW);

while (STATE == 1) { 
  
  //Quadrante direito 
  while(pos1 >=80 && STATE == 1){
    myservo1.write(pos1);
    delay(2);
    pos1--;
    myservo2.write(pos2);
    pos2--;
    delay(2);
    key = keypad.getKey();
    
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0; 
         STATEBUSY = 0;
         }    
    } 
    
    //quadrante superior
    while(pos1 <=90 && STATE == 1){
    myservo1.write(pos1);
    delay(2);
    pos1 ++;
    myservo2.write(pos2);
    pos2--;
    delay(2);
    
    key = keypad.getKey();
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0; 
         STATEBUSY = 0;
         }   
    }
      
    //quadrante esquerdo
    while(pos1 <=100 && STATE == 1){
    myservo1.write(pos1);
    delay(2);
    pos1 ++;
    myservo2.write(pos2);
    pos2++;
    delay(2);
    
    key = keypad.getKey();
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0; 
         STATEBUSY = 0;
         }   
    }
    
    //Quadrante inferior
    while(pos1 >=90 && STATE == 1){
    myservo1.write(pos1);
    delay(2);
    pos1 --;
    myservo2.write(pos2);
    pos2++;
    delay(2);
    
    key = keypad.getKey();
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0; 
         STATEBUSY = 0;
         }   
    }
  
         
    }
  }
