/* QUADRADOS - INFINITO */

void ProgramBa(){

  char key = keypad.getKey();
  
int e = 75;
int y = 0;
int z = 0;
  
pos1=70;
myservo1.write(pos1);
pos2=110;
myservo2.write(pos2);

STATEM = 0;
digitalWrite(ledPin, HIGH);

         while (STATE == 1 && STATEBUSY == 2) { 
         BEGUIN:
         
         pos2 = 70+z;
         pos1 = 110+y;
         myservo1.write(pos1);
         myservo2.write(pos2);
         delay(e);
        
        key = keypad.getKey();

        //+Velocidade
        if (key == '3') {  
           e -= 10;
           
           if(e < 25) {
             e = 25;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '6'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '4') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
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
        
        if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATEBUSY = 1;
         }
         
         pos2 = 70+z;
         pos1 = 90+y;
         myservo1.write(pos1);
         myservo2.write(pos2);
         delay(e);
           
         key = keypad.getKey();
         
        //+Velocidade
        if (key == '3') {  
           e -= 10;
           
           if(e < 25) {
             e = 25;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '6'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '4') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
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
         
          if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATEBUSY = 1;
         }
          
           pos2 = 90+z;
           pos1 = 90+y;
           myservo1.write(pos1);    
           myservo2.write(pos2);
           delay(e);
         
         key = keypad.getKey();  
         
         //+Velocidade
        if (key == '3') {  
           e -= 10;
           
           if(e < 25) {
             e = 25;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '6'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '4') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
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
         
          if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATEBUSY = 1;
         }    
        
        pos2 = 90+z;
        pos1 = 70+y;
        myservo1.write(pos1);
        myservo2.write(pos2);              // tell servo to go to position in variable 'pos' 
        delay(e);
        
        key = keypad.getKey();   
        
        //+Velocidade
        if (key == '3') {  
           e -= 10;
           
           if(e < 25) {
             e = 25;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '6'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '4') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
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
        
          if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATEBUSY = 1;
         }    
      
        pos2 = 70+z;
        pos1 = 70+y;
        myservo1.write(pos1);
        myservo2.write(pos2); 
        delay(e);
      
         key = keypad.getKey();  
         
         
        //+Velocidade
        if (key == '3') {  
           e -= 10;
           
           if(e < 25) {
             e = 25;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '6'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '4') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
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
         
          if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATEBUSY = 1;
         }  
         
         pos2 = 70+z;
         pos1 = 90+y;
         myservo1.write(pos1); 
         myservo2.write(pos2);              // tell servo to go to position in variable 'pos' 
        delay(e);
           
         key = keypad.getKey();
         
        //+Velocidade
        if (key == '3') {  
           e -= 10;
           
           if(e < 25) {
             e = 25;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '6'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '4') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
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
         
          if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATEBUSY = 1;
         }
       
       pos2 = 90+z;
       pos1 = 90+y;
       myservo1.write(pos1);              // tell servo to go to position in variable 'pos' 
       myservo2.write(pos2);
       delay(e);
         
         key = keypad.getKey();  
         
        //+Velocidade
        if (key == '3') {  
           e -= 10;
           
           if(e < 25) {
             e = 25;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '6'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '4') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
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
         
          if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATEBUSY = 1;
         }    
       
       pos2 = 90+z;  
       pos1 = 110+y;
       myservo1.write(pos1); 
       myservo2.write(pos2);              // tell servo to go to position in variable 'pos' 
       delay(e);
       
       key = keypad.getKey();   
      
        //+Velocidade
        if (key == '3') {  
           e -= 10;
           
           if(e < 25) {
             e = 25;
           }
           
           goto BEGUIN; 
         }
         
         //-Velocidade
         if (key == '1') {  
           e += 10;
           goto BEGUIN; 
         }
         
         //Direita
         if(key == '6'){   
           y -= 10;
           if(pos2 <=1 ) y+=5;
           myservo2.write(pos2);
           goto BEGUIN;                  
         }  
         
         //Esquerda
         if (key == '4') {  
           y += 10 ;
           if(pos2 >= 175) y -=5;              
           myservo2.write(pos2);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=10;
         myservo1.write(pos1); 
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
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
       
          if (key == '*') {   
         Serial.println(F("EXITING..."));
         Serial.print(F("\n"));
         STATEM = 0;
         STATEBUSY = 1;
         } 
   }
   }
