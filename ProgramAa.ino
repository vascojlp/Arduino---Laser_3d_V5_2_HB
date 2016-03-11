void ProgramAa() {
  
  digitalWrite(laser2Pin, HIGH);
  
  int a = 1;
  int b = 178;
  int c = 70;
  int d = 30;
  int e = 5;
  

Serial.print(F("HEARTBEAt"));

  digitalWrite(ledPin, HIGH);
  
  char key = keypad.getKey();
 
  BEGUIN:
  while (STATE == 1 && STATEBUSY == 2) {
    
    key = keypad.getKey();
    if (key == '1' ) {
    digitalWrite(laser2Pin, HIGH);
    }
    
    key = keypad.getKey();
    if (key == '2' ) {
    digitalWrite(laser2Pin, LOW);
    }

      int A = analogRead(pinMicA);
      
      //Serial.println("analog = ");
      //Serial.println(A);
       
      if(A == HIGH || A >= 800){ 
        
        ///-----
 
         pos1 = 90;
         myservo1.write(pos1);
         pos2 = 75;
         myservo2.write(pos2);
         
         delay(50);
         
       key = keypad.getKey();
        if (key == '*') {   
         Serial.println(F("EXITING HB..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 1; 
         STATEBUSY = 1;

         goto BEGUIN;
         } 
        

      key = keypad.getKey();
    if (key == '1' ) {
    digitalWrite(laser2Pin, HIGH);
    }
    
    key = keypad.getKey();
    if (key == '2' ) {
    digitalWrite(laser2Pin, LOW);
    }
         
      }
      
      A = analogRead(pinMicA);
      
      if(A == HIGH || A >= 800){ 
        
        //---
         
         pos1 = 90;
         myservo1.write(pos1);
         pos2 = 35;
         myservo2.write(pos2);
         
         delay(50);
         
         
        if (key == '*') {   
         Serial.println(F("EXITING HB..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 1; 
         STATEBUSY = 1;

         goto BEGUIN;
         }
        
        key = keypad.getKey();
        if (key == '1' ) {
        digitalWrite(laser2Pin, HIGH);
        }
    
    key = keypad.getKey();
    if (key == '2' ) {
    digitalWrite(laser2Pin, LOW);
    }
         
      }
      
       key = keypad.getKey();
        if (key == '*') {   
         Serial.println(F("EXITING HB..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 1; 
         STATEBUSY = 1;

         goto BEGUIN;
         }
     
     }
}
