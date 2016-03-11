void ProgramDa(){
  
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
        
        //Serial.println(F("BEAT"));
      
        pos1 = random(35, 145);
        myservo1.write(pos1);
        delay(200);

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
        
        //Serial.println(F("BEAT"));
      
        pos2 = random(25, 90);
        myservo2.write(pos2); 
        
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
