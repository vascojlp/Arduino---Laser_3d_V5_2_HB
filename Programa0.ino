void Program0(){
  STATEBUSY = 1;
  
  char key = keypad.getKey();
  
pos1=90;
myservo1.write(pos1);
pos2=80;
myservo2.write(pos2);

int t = 75;
int z = 0;

INICIO:

while (STATE == 1 ){  
  BEGUIN:
  
for(int i = 30; i <= 80+z; i++){                                  // in steps of 1 degree
         pos2 = i;
         myservo2.write(pos2);
         delay(t);
         key = keypad.getKey(); 
         
         if (key == '1') {
           t= t + 5; 
         goto BEGUIN;
         }
         
         if (key == '3') {
           t= t - 5;
           
           if(t <= 5) {
             t = 5;
         }
         goto BEGUIN;
         }
         
         if(key == '6'){   
           pos1 -= 5;
           if(pos1 <=1 ) pos1+=5;
           myservo1.write(pos1);              // tell servo to go to position in variable 'pos'          
         }  
         
         if (key == '4') {  
           pos1 += 5;
           if(pos1 >= 175) pos1 -=5;              
           myservo1.write(pos1);  
           goto BEGUIN;
         }
         
         if (key == '5') {  
           pos1 = 90;
           t = 75;
           myservo1.write(pos1);
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '8') {
         z +=10;
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '2') {
           z -=10; 
           
           if(z <= 5) {
             z += 5;
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
    
 for(int i = 80+z; i >= 30; i--){                                  // in steps of 1 degree
         pos2 = i;
         myservo2.write(pos2);
         delay(t);
         key = keypad.getKey(); 
         
         if (key == '1') {
           t= t + 5; 
         goto BEGUIN;
         }
         
         if (key == '3') {
           t= t - 5;
           
           if(t <= 5) {
             t = 5;
         }
         goto BEGUIN;
         }
         
         if(key == '6'){   
           pos1 -= 5;
           if(pos1 <=1 ) pos1+=5;
           myservo1.write(pos1);              // tell servo to go to position in variable 'pos'          
         }  
         
         if (key == '4') {  
           pos1 += 5;
           if(pos1 >= 175) pos1 -=5;              
           myservo1.write(pos1);  
           goto BEGUIN;
         }
         
         if (key == '5') {  
           pos1 = 90;
           t = 75;
           myservo1.write(pos1);
           goto BEGUIN;
         }
         
         //Baixo
         if (key == '8') {
         z +=10;
         
         if(z >= 175) {
             z -= 5;
         }
         goto BEGUIN;
         }
         
         //Cima
         if (key == '2') {
           z -=10; 
           
           if(z <= 5) {
             z += 5;
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
         delay(5);
    }
}   
         
         
         
         
}
