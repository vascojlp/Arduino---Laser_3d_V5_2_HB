/* VARRIMENTO VERTICAL E HORIZONTAL */


void ProgramA(){
STATEBUSY = 1;
  
char key = keypad.getKey();

  pos1=90;
  myservo1.write(pos1);
  pos2=60;
  myservo2.write(pos2);
  
  int a = 1;
  int b = 178;
  int c = 70;
  int d = 30;
  int e = 5;
          
  STATEM = 0;
  digitalWrite(ledPin, LOW);
  
  INICIO:

        while (STATE == 1){
          BEGUIN:
             
          char key = keypad.getKey();
         
         //Music Beat
         key = keypad.getKey();
         if (key == '7') {  
          STATEBUSY = 2;
          ProgramAa();
            }

        //Normal        
         for(int i = a; i <= b; i+=2){           // in steps of 1 degree
         pos1 = i;
         myservo1.write(pos1);
         key = keypad.getKey();
         
                 
          //Esquerda
          if(key == '4'){   
           a += 5;
           b -= 5;
           if(pos1 <= 1 ) pos1+=5;
           myservo1.write(pos1);
           if (pos1 >= 179) pos1 -= 5;
           myservo1.write(pos1);  
           goto BEGUIN;        
         }  
         
         //Direita
         if (key == '6') {  
           a -= 5;
           b += 5;
           if(pos1 <=1 ) pos1+=5;
           myservo1.write(pos1);
           if (pos1 >= 179) pos1 -= 5;              
           myservo1.write(pos1); 
           goto BEGUIN; 
         }
         
         //Centrar
           if (key == '5') {  
           a = 1;
           b = 178;
           e = 5;
           goto BEGUIN; 
         }
         
         //+Velocidade
         if (key == '3') {  
           e -= 1;
           
           if(e <= 2) {
             e = 2;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 1;
           goto BEGUIN; 
         }
         
          if (key == '0') {  
           digitalWrite(laser2Pin, LOW);
           goto BEGUIN; 
         }
        
        if (key == '*') {   
           Serial.println(F("EXITING..."));
           Serial.print(F("\n"));
           STATEM = 0;
           STATE = 0;
           STATEBUSY = 0;
           goto INICIO;
           //break;
         }
      
      //Music Beat
         if (key == '7') {  
          STATEBUSY = 2;
          ProgramAa();
            }   
            
         delay(e);
         
                 
           for(int j = c; j >= d; j--){                                  // in steps of 1 degree
           pos2 = j;
           myservo2.write(pos2);              // tell servo to go to position in variable 'pos'    
           delay(e);
         
         key = keypad.getKey();  
         
         //Baixo
         if (key == '2') {
           c += 5;
           d += 5;
           
           if(pos2 <=1 ) pos2+=5;
           myservo2.write(pos2);
           if (pos2 >= 179) pos2 -= 5;
           myservo2.write(pos2);
           goto BEGUIN; 
         }
         
         //Cima
         if (key == '8') {
          c -= 5;
          d -= 5; 
          
          if(pos2 <=1 ) pos2+=5;
          myservo2.write(pos2);
          if (pos2 >= 179) pos2 -= 5;
          myservo2.write(pos2);
          goto BEGUIN; 
         }
         
         //Centrar
         if (key == '5') {  
           c = 70;
           d = 30;
           e = 5;
           goto BEGUIN; 
         }
         
         //+Velocidade
         if (key == '3') {  
           e -= 1;
           
           if(e <= 2) {
             e = 2;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 1;
           goto BEGUIN; 
         }
         
         if (key == '0') {  
           digitalWrite(laser2Pin, LOW);
           goto BEGUIN; 
         }
         
           if (key == '*') {   
           Serial.println(F("EXITING..."));
           Serial.print(F("\n"));
           STATEM = 0;
           STATE = 0;
           STATEBUSY = 0;
           goto INICIO;
         }
         
         //Music Beat
         if (key == '7') {  
          STATEBUSY = 2;
          ProgramAa();
            }
            
        }
         }
         
         
         // Para tras
         for(int i = b; i >= a; i-=2){                                  // in steps of 1 degree
         pos1 = i;
         myservo1.write(pos1);
         key = keypad.getKey(); 
         
         //Direita
         if(key == '6'){   
           a += 5;
           b -= 5;
           if(pos1 <=1 ) pos1+=5;
           myservo1.write(pos1);
           if (pos1 >= 179) pos1 -= 5;
           myservo1.write(pos1);  
           goto BEGUIN; 
         }  
         
         //Esquerda
         if (key == '4') {  
           a -= 5;
           b += 5;
           if(pos1 <=1 ) pos1+=5;
           myservo1.write(pos1);
           if (pos1 >= 179) pos1 -= 5;              
           myservo1.write(pos1);
           goto BEGUIN;            
         }
         
         //Centrar
           if (key == '5') {  
           a = 1;
           b = 178;
           e = 5;
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e -= 1;
           goto BEGUIN; 
         }
         
         //+Velocidade
         if (key == '3') {  
           e += 1;
           
           if(e <= 2) {
             e = 2;
           }
           
           goto BEGUIN; 
         }
         
         if (key == '0') {  
           digitalWrite(laser2Pin, LOW);
           goto BEGUIN; 
         }
         
          if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         goto INICIO;
         //break;
         }  
  
  //Music Beat
         if (key == '7') {  
          STATEBUSY = 2;
          ProgramAa();
            }
            
         delay(e);
                   
           for(int j = c; j >= d; j--){                                  // in steps of 1 degree
           pos2 = j;
           myservo2.write(pos2);              // tell servo to go to position in variable 'pos'    
           delay(e);
         
         key = keypad.getKey();  
         
         //Cima
         if (key == '8') {
           c += 5;
           d += 5;
           
           if(pos2 <=1 ) pos2+=5;
           myservo2.write(pos2);
           if (pos2 >= 179) pos2 -= 5;
           myservo2.write(pos2);
           goto BEGUIN; 
         }
         
         //Baixo
         if (key == '2') {
          c -= 5;
          d -= 5; 
          
          if(pos2 <=1 ) pos2+=5;
          myservo2.write(pos2);
          if (pos2 >= 179) pos2 -= 5;
          myservo2.write(pos2);
          goto BEGUIN; 
         }
         
         //Centrar
         if (key == '5') {  
           c = 70;
           d = 30;
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e -= 1;
           
           if(e <= 2) {
             e = 2;
           }
           
           goto BEGUIN; 
         }
         
         //+Velocidade
         if (key == '3') {  
           e += 1;
           goto BEGUIN; 
         }
         
         if (key == '0') {  
           digitalWrite(laser2Pin, LOW);
           goto BEGUIN; 
         }
         
           if (key == '*') {   
           Serial.println(F("EXITING..."));
           Serial.print(F("\n"));
           STATEM = 0;
           STATE = 0;
           STATEBUSY = 0;
           goto INICIO;
           //break;
           }
           
           //Music Beat
         if (key == '7') {  
          STATEBUSY = 2;
          ProgramAa();
          
            }
            if (key == '0') {  
           digitalWrite(laser2Pin, LOW);
           goto BEGUIN; 
         }
            
           }
         }
         
         }
}
       
   

