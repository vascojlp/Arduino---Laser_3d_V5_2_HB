
void ReadKeys(KeypadEvent key){
  
  
    switch (keypad.getState()){       
      
   case PRESSED:
   //case HOLD:
     
/***************************** CONTROLO MANUAL **********************************************/
if (key == '#' && STATEBUSY == 0) {
       STATEM = 1;       
       Serial.print(F("A correr Modo Manual"));
       Serial.print(F("\n"));
       digitalWrite(ledPin, HIGH);
       digitalWrite(laser1Pin, HIGH);
       digitalWrite(laser2Pin, HIGH);
       
       Manual();
         
         if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         digitalWrite(ledPin, LOW);
         digitalWrite(laser1Pin, LOW);
         digitalWrite(laser2Pin, LOW);
         }
         
  }

      if (key == '*' && STATEM != 1 && STATEBUSY == 0){
       STATE = 1; 
       STATEM = 0;
       
       Serial.print(F("A correr RGB"));
       Serial.print(F("\n"));   
       
       rgb();
   }  

/******************************  CONTROLO AUTOMATICO PROGRAMAS  *****************************************/
     if (key == 'A' && STATEM != 1 && STATEBUSY == 0) {
       STATE = 1; 
       STATEM = 0;
       
       Serial.print(F("A correr programa A"));
       Serial.print(F("\n"));   
       digitalWrite(laser1Pin, HIGH); 
       digitalWrite(laser2Pin, HIGH);
 
         ProgramA();
  
         if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         digitalWrite(laser1Pin, LOW);
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
   }
  
  
  if (key == 'B' && STATEM == 0 && STATEBUSY == 0) {
       STATE = 1;    
       STATEM = 0;  
       
       Serial.print(F("A correr programa B"));
       Serial.print(F("\n"));
       digitalWrite(laser1Pin, HIGH);
       
         ProgramB();
  
         if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         digitalWrite(laser1Pin, LOW);
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
   }
  
  
  if (key == 'C' && STATEM == 0 && STATEBUSY == 0) {
       STATE = 1;
       STATEM = 0;
       
       Serial.print(F("A correr programa C"));
       Serial.print(F("\n"));
       digitalWrite(laser1Pin, HIGH);
       
       while (STATE == 1){ 
         ProgramC();  
  
         if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         digitalWrite(laser1Pin, LOW);
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
       
       }
   }
  
 
  if (key == 'D' && STATEM == 0 && STATEBUSY == 0) {
       STATE = 1;    
       STATEM = 0;
       
       Serial.print(F("A correr programa D"));
       Serial.print(F("\n"));
       digitalWrite(laser1Pin, HIGH);
         
       while (STATE == 1){ 
         ProgramD();  
  
         if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         digitalWrite(laser1Pin, LOW);
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
       
       }
   }
  
  if (key == '1' && STATEM == 0 && STATEBUSY == 0) {
       STATE = 1;   
       STATEM = 0;
       
       Serial.print(F("A correr programa 1"));
       Serial.print(F("\n"));
       digitalWrite(laser1Pin, HIGH);
         
       while (STATE == 1){ 
         Program1();  
  
         if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         digitalWrite(laser1Pin, LOW);
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
       
       }
   }
   
   
   if (key == '0' && STATEM == 0 && STATEBUSY == 0) {
       STATE = 1;   
       STATEM = 0;
       
       Serial.print(F("A correr programa 0"));
       Serial.print(F("\n"));
       digitalWrite(laser2Pin, HIGH);
         
       while (STATE == 1){ 
         Program0();  
  
         if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         digitalWrite(laser2Pin, LOW);
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
       
       }
   }
   
   if (key == '2' && STATEM == 0 && STATEBUSY == 0) {
       STATE = 1;   
       STATEM = 0;
       
       Serial.print(F("A correr programa 1"));
       Serial.print(F("\n"));
       digitalWrite(laser1Pin, HIGH);
         
       while (STATE == 1){ 
         ProgramBa();  
  
         if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         digitalWrite(laser1Pin, LOW);
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
       
       }
   }
   

    
    }
  }
  
