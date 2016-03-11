void Program1(){
  STATEBUSY = 1;

  char key = keypad.getKey();
  
pos1=90;
myservo1.write(pos1);
pos2=60;
myservo2.write(pos2);

int e = 5;
int y = 0;
int z = 0;

STATEM = 0;
digitalWrite(ledPin, LOW);
INICIO:

while (STATE == 1 ){
       BEGUIN:
       
         for(int i = 90; i >= 40; i--){                                  // in steps of 1 degree
         pos2 = i+z;
         myservo2.write(pos2);
         key = keypad.getKey(); 
         
         if (key == '3') {  
           e -= 1;
           
           if(e <= 2) {
             e = 2;
           }
           
           goto BEGUIN; 
         }
         
         if (key == '1') {  
           e += 1;
           goto BEGUIN; 
         }
         
         if(key == '6'){   
           y -= 10;
           if(pos1 <=1 ) y+=5;
           myservo1.write(pos1);
           goto BEGUIN;                  
         }  
         
         if (key == '4') {  
           y += 10 ;
           if(pos1 >= 175) y -=5;              
           myservo1.write(pos1);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         if (key == '5') {  
           y = 0;
           e = 5;
           z = 0;
           pos1=90;
           myservo1.write(pos1);
           pos2=60;
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=5;
         
         if(pos2 >= 90) {
             z = 0;
             myservo2.write(pos2);
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
           z -=5; 
           
           if(pos2 <= 45) {
             z = 0;
             myservo2.write(pos2);
         }
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
         delay(e);
                   
           for(int j = 120+y; j >= 60+y; j--){                                  // in steps of 1 degree
           pos1 = j;
           myservo1.write(pos1);              // tell servo to go to position in variable 'pos'    
           delay(e);
         
         key = keypad.getKey();  
         
          if (key == '3') {  
           e -= 1;
           
           if(e <= 2) {
             e = 2;
           }
           
           goto BEGUIN; 
         }
         
         if (key == '1') {  
           e += 1;
           goto BEGUIN; 
         }
         
         if(key == '6'){   
           y -= 10;
           if(pos1 <=1 ) y+=5;
           myservo1.write(pos1);
           goto BEGUIN;                  
         }  
         
         if (key == '4') {  
           y += 10 ;
           if(pos1 >= 175) y -=5;              
           myservo1.write(pos1);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         if (key == '5') {  
           y = 0;
           e = 5;
           z = 0;
           pos1=90;
           myservo1.write(pos1);
           pos2=60;
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=5;
         
         if(pos2 >= 90) {
             z = 0;
             myservo2.write(pos2);
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
           z -=5; 
           
           if(pos2 <= 45) {
             z = 0;
             myservo2.write(pos2);
         }
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
           }
         }
         
         // Para tras
         for(int i = 40; i <= 90; i++){                                  // in steps of 1 degree
         pos2 = i+z;
         myservo2.write(pos2);
         key = keypad.getKey(); 
         
          if (key == '3') {  
           e -= 1;
           
           if(e <= 2) {
             e = 2;
           }
           
           goto BEGUIN; 
         }
         
         if (key == '1') {  
           e += 1;
           goto BEGUIN; 
         }
         
         if(key == '6'){   
           y -= 10;
           if(pos1 <=1 ) y+=5;
           myservo1.write(pos1);
           goto BEGUIN;                  
         }  
         
         if (key == '4') {  
           y += 10 ;
           if(pos1 >= 175) y -=5;              
           myservo1.write(pos1);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         if (key == '5') {  
           y = 0;
           e = 5;
           z = 0;
           pos1=90;
           myservo1.write(pos1);
           pos2=60;
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=5;
         
         if(pos2 >= 90) {
             z = 0;
             myservo2.write(pos2);
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
           z -=5; 
           
           if(pos2 <= 45) {
             z = 0;
             myservo2.write(pos2);
         }
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
         delay(e);
                   
           for(int j = 120+y; j >= 60+y; j--){                                  // in steps of 1 degree
           pos1 = j;
           myservo1.write(pos1);              // tell servo to go to position in variable 'pos'    
           delay(e);
         
         key = keypad.getKey();  
         
          if (key == '3') {  
           e -= 1;
           
           if(e <= 2) {
             e = 2;
           }
           
           goto BEGUIN; 
         }
         
         if (key == '1') {  
           e += 1;
           goto BEGUIN; 
         }
         
         if(key == '6'){   
           y -= 10;
           if(pos1 <=1 ) y+=5;
           myservo1.write(pos1);
           goto BEGUIN;                  
         }  
         
         if (key == '4') {  
           y += 10 ;
           if(pos1 >= 175) y -=5;              
           myservo1.write(pos1);              // tell servo to go to position in variable 
           goto BEGUIN;
         }
         
         if (key == '5') {  
           y = 0;
           e = 5;
           z = 0;
           pos1=90;
           myservo1.write(pos1);
           pos2=60;
           myservo2.write(pos2);
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '2') {
         z +=5;
         
         if(pos2 >= 90) {
             z = 0;
             myservo2.write(pos2);
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '8') {
           z -=5; 
           
           if(pos2 <= 45) {
             z = 0;
             myservo2.write(pos2);
         }
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
           }
         }
         
         
  
         }
   }
