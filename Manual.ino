void Manual() {
  
  STATEBUSY = 1;
         
  char key = keypad.getKey();
  
  digitalWrite(ledPin, HIGH);
  
  INICIO:
  
      while (STATEM == 1){
        key = keypad.getKey();
        STATE = 0;
           
        if(pos1 <=0 ) pos1 = 0;        
        if(pos1 >= 175) pos1 = 175; 
        if(pos2 <=0 ) pos2 = 0;        
        if(pos2 >= 175) pos2 = 175;
        
        //Direita
           if(key == '6'){   
           Serial.println(F("DIREITA"));
           Serial.print(F("\n")); 
           pos1 -= 5;
           if(pos1 <=1 ) pos1+=5;
           myservo1.write(pos1);              // tell servo to go to position in variable 'pos'
           Serial.println(pos1);          
           char key = keypad.getKey();   
         }  
         
         
         //ESQUERDA
         if (key == '4') {  
           Serial.println(F("ESQUERDA"));
           Serial.print(F("\n")); 
           pos1 += 5;
           if(pos1 >= 175) pos1 -=5;              
           myservo1.write(pos1);              // tell servo to go to position in variable 
           Serial.println(pos1); 
           char key = keypad.getKey();
         }
         
          //cima
         if(key == '2') {   
           Serial.println(F("CIMA"));
           Serial.print(F("\n")); 
           pos2 -=5;        
           if(pos2 <=1) pos2 +=5;           
           myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
           Serial.println(pos2); 
           char key = keypad.getKey();   
           }         
         
         //baixo
         if (key == '8') {  
           Serial.println(F("BAIXO"));
           Serial.print(F("\n")); 
           pos2 +=5;
           if(pos2 >= 175) pos2 -= 5; 
           myservo2.write(pos2);              // tell servo to go to position in variable 
           Serial.println(pos2); 
           char key = keypad.getKey();
           }
         
         //Tudo Esquerda
         if (key == '9') {  
           Serial.println(F(" 0 graus"));
           Serial.print(F("\n")); 
           pos1 = 0;
           myservo1.write(pos1);
    }
    
    //Tudo Direita
         if (key == '7') {  
           Serial.println(F(" 180 graus"));
           Serial.print(F("\n")); 
           pos1 = 175;
           myservo1.write(pos1);
           }
  
      //Tudo Cima
         if (key == '1') {  
           Serial.println(F(" 0 graus"));
           Serial.print(F("\n")); 
           pos2 = 0;
           myservo2.write(pos2);
           }
  
        //Tudo Baixo
         if (key == '3') {  
           Serial.println(F(" 180 graus"));
           Serial.print(F("\n")); 
           pos2 = 175;
           myservo2.write(pos2);
           }
  
      //Centrar
         if (key == '5') {  
           Serial.println(F("CENTRO"));
           Serial.print(F("\n")); 
           pos1 = 90;
           pos2 = 85;
           myservo1.write(pos1);
           myservo2.write(pos2);
    }


//key = keypad.getKey();
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

}


