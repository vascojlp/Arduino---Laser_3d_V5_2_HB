void rgb(){
  
  digitalWrite(ledPin, HIGH);
  delay(250);
  digitalWrite(ledPin, LOW);
  delay(250);
  digitalWrite(ledPin, HIGH);
  
  STATEBUSY = 1;
  STATEM = 0;
  
  INICIO: 
  while (STATE == 1){
     char key = keypad.getKey();
       
       if(key == '1'){
          digitalWrite(redPin, HIGH);  
          digitalWrite(greenPin, HIGH);  
          digitalWrite(bluePin, LOW);
       }
       
       if(key == '2'){
         digitalWrite(redPin, LOW);  
          digitalWrite(greenPin, HIGH);  
          digitalWrite(bluePin, HIGH);    
       }
       
       if(key == '3'){
         digitalWrite(redPin, HIGH); 
          digitalWrite(greenPin, LOW);  
          digitalWrite(bluePin, HIGH);   
       }
       
       if(key == '4'){
          digitalWrite(redPin, LOW);  
          digitalWrite(greenPin, LOW);  
          digitalWrite(bluePin, HIGH);
       }
       
       if(key == '5'){
         digitalWrite(redPin, LOW);  
          digitalWrite(greenPin, HIGH);  
          digitalWrite(bluePin, LOW);    
       }
       
       if(key == '6'){
         digitalWrite(redPin, HIGH); 
          digitalWrite(greenPin, LOW);  
          digitalWrite(bluePin, LOW);   
       }
       
       if(key == '0'){
          digitalWrite(redPin, HIGH); 
          digitalWrite(greenPin, HIGH);  
          digitalWrite(bluePin, HIGH);   
       }
       
       
       
       if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         goto INICIO;
         }            

      }        
    
    
    
    
  }

