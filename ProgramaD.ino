void ProgramD(){

STATEBUSY = 1;

pos1=90;
myservo1.write(pos1);
pos2=60;
myservo2.write(pos2);

int t = 200;

STATEM = 0;

digitalWrite(ledPin, LOW);

char key = keypad.getKey();

while (STATE == 1) { 
  BEGUIN:
  digitalWrite(ledPin, LOW);
  
        key = keypad.getKey();
         if (key == '7') {  
          STATEBUSY = 2;
          ProgramDa();
            } 
         
        pos1 = random(35, 145);
        myservo1.write(pos1);
        delay(t);
        
        key = keypad.getKey();
         if (key == '7') {  
          STATEBUSY = 2;
          ProgramDa();
            } 
        
        if (key == '1') {
                 t= t + 10; 
               goto BEGUIN;
               }
               
               if (key == '3') {
                 t= t - 10;
                 
                 if(t <= 75) {
                   t = 75;
               }
               goto BEGUIN;
               }
               
               if (key == '5') {  
                 pos1=90;
                  myservo1.write(pos1);
                  pos2=60;
                  myservo2.write(pos2);
                 t = 200;
                 goto BEGUIN;
               }
               
               if (key == '*') {   
               Serial.println(F("EXITING..."));
               Serial.print(F("\n"));
               STATEM = 0;
               STATE = 0; 
               STATEBUSY = 0;
               STATEMIC = 0;
               }
        
        pos2 = random(25, 90);
        myservo2.write(pos2);
        pos2--;
        delay(t);
        
        key = keypad.getKey();
         if (key == '7') {  
          STATEBUSY = 2;
          ProgramDa();
            } 
        
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
               
                if (key == '5') {  
                 pos1=90;
                  myservo1.write(pos1);
                  pos2=60;
                  myservo2.write(pos2);
                 t = 200;
                 goto BEGUIN;
               }
        
              if (key == '*') {   
               Serial.println(F("EXITING..."));
               Serial.print(F("\n"));
               STATEM = 0;
               STATE = 0; 
               STATEBUSY = 0;
               STATEMIC = 0;
               }    
        
  
  }


}
