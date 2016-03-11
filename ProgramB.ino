/* QUADRADOS */

void ProgramB(){
  STATEBUSY = 1;

  char key = keypad.getKey();
  
int e = 75;
int y = 0;
int z = 0;
  
pos1=80;
myservo1.write(pos1);
pos2=70;
myservo2.write(pos2);

STATEM = 0;
digitalWrite(ledPin, LOW);

         while (STATE == 1) { 
         BEGUIN:
         digitalWrite(ledPin, LOW);
         
         key = keypad.getKey();  
         
         pos1 = 80+z;
         myservo1.write(pos1);
         delay(e);
        
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '8'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '2') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '4') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '6') {
           z -=10;
           myservo1.write(pos1); 
           
           if(z <= 5) {
             z += 5;
         }
         goto BEGUIN;
         }        
         
         //Centrar
         if (key == '5') {  
           y = 0;
           e = 75;
           z= 0;
           pos1 = 80;
           pos2 = 70;
           
           myservo1.write(pos1);
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
            if (key == '7') {  
           ProgramBa();
           STATEBUSY = 2;
           } 
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
         
         pos2 = 50+y;
         myservo2.write(pos2);
         delay(e);
         
         key = keypad.getKey();
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '8'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '2') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '4') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '6') {
           z -=10;
           myservo1.write(pos1); 
           
           if(z <= 5) {
             z += 5;
         }
         goto BEGUIN;
         }        
         
         //Centrar
         if (key == '5') {  
           y = 0;
           e = 75;
           z= 0;
           pos1 = 80;
           pos2 = 70;
           
           myservo1.write(pos1);
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
            if (key == '7') {  
           ProgramBa();
           STATEBUSY = 2;
           } 
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
          
           pos1 = 90+z;
           myservo1.write(pos1);              // tell servo to go to position in variable 'pos' 
           delay(e);
         
         key = keypad.getKey();
         
        //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '8'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '2') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '4') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '6') {
           z -=10;
           myservo1.write(pos1); 
           
           if(z <= 5) {
             z += 5;
         }
         goto BEGUIN;
         }        
         
         //Centrar
         if (key == '5') {  
           y = 0;
           e = 75;
           z= 0;
           pos1 = 80;
           pos2 = 70;
           
           myservo1.write(pos1);
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
            if (key == '7') {  
           ProgramBa();
           STATEBUSY = 2;
           } 
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
        
        pos2 = 40+y;
        myservo2.write(pos2);              // tell servo to go to position in variable 'pos' 
        delay(e); 
        
        key = keypad.getKey();
        
        //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '8'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '2') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '4') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '6') {
           z -=10;
           myservo1.write(pos1); 
           
           if(z <= 5) {
             z += 5;
         }
         goto BEGUIN;
         }        
         
         //Centrar
         if (key == '5') {  
           y = 0;
           e = 75;
           z= 0;
           pos1 = 80;
           pos2 = 70;
           
           myservo1.write(pos1);
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
            if (key == '7') {  
           ProgramBa();
           STATEBUSY = 2;
           } 
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }    
      
        pos1 = 100+z;
        myservo1.write(pos1);              // tell servo to go to position in variable 'pos' 
        delay(e);
  
        key = keypad.getKey();
         
        //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '8'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '2') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '4') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '6') {
           z -=10;
           myservo1.write(pos1); 
           
           if(z <= 5) {
             z += 5;
         }
         goto BEGUIN;
         }        
         
         //Centrar
         if (key == '5') {  
           y = 0;
           e = 75;
           z= 0;
           pos1 = 80;
           pos2 = 70;
           
           myservo1.write(pos1);
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
            if (key == '7') {  
           ProgramBa();
           STATEBUSY = 2;
           } 
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
 
         pos2 = 50+y;
        myservo2.write(pos2);              // tell servo to go to position in variable 'pos' 
        delay(e);
        
        key = keypad.getKey();
           
        //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '8'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '2') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '4') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '6') {
           z -=10;
           myservo1.write(pos1); 
           
           if(z <= 5) {
             z += 5;
         }
         goto BEGUIN;
         }        
         
         //Centrar
         if (key == '5') {  
           y = 0;
           e = 75;
           z= 0;
           pos1 = 80;
           pos2 = 70;
           
           myservo1.write(pos1);
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
            if (key == '7') {  
           ProgramBa();
           STATEBUSY = 2;
           } 
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
       
       pos1 = 90+z;
       myservo1.write(pos1);              // tell servo to go to position in variable 'pos' 
       delay(e);
       
       key = keypad.getKey();
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '8'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '2') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '4') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '6') {
           z -=10;
           myservo1.write(pos1); 
           
           if(z <= 5) {
             z += 5;
         }
         goto BEGUIN;
         }        
         
         //Centrar
         if (key == '5') {  
           y = 0;
           e = 75;
           z= 0;
           pos1 = 80;
           pos2 = 70;
           
           myservo1.write(pos1);
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
            if (key == '7') {  
           ProgramBa();
           STATEBUSY = 2;
           } 
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
         
       pos2 = 60+y;
       myservo2.write(pos2);              // tell servo to go to position in variable 'pos' 
       delay(e);
       
       key = keypad.getKey();
       
       //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '8'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '2') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '4') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '6') {
           z -=10;
           myservo1.write(pos1); 
           
           if(z <= 5) {
             z += 5;
         }
         goto BEGUIN;
         }        
         
         //Centrar
         if (key == '5') {  
           y = 0;
           e = 75;
           z= 0;
           pos1 = 80;
           pos2 = 70;
           
           myservo1.write(pos1);
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
            if (key == '7') {  
           ProgramBa();
           STATEBUSY = 2;
           } 
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATE = 0;
         STATEBUSY = 0;
         }
         
         
         
   }
   }
