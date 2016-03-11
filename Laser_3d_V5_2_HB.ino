#include <Servo.h>
#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns

char keys[ROWS][COLS] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};

//byte rowPins[ROWS] = {4, 5, 6, 7}; //connect to the row pinouts of the keypad
//byte colPins[COLS] =  {0, 1, 2, 3};//connect to the column pinouts of the keypad

byte rowPins[ROWS] = {10,9,8,7}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6,5,4,3};//connect to the column pinouts of the keypad


Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int STATE = 0;
int STATEM = 0;
int STATEBUSY = 0;
int STATEMIC = 0;
int t;
int sound = 0;

int ledPin = 13;
int pinMic = 2;
int laser1Pin = A0; //ponto
int laser2Pin = A5;  //linha

int redPin = 17;
int greenPin = 15;
int bluePin = 16;

//uncomment this line if using a Common Anode LED
#define COMMON_ANODE

int pinMicA = A4;

Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo
int pos1 = 90;    // variable to store the servo position
int pos2 = 90;    // variable to store the servo position
//int analogPin1 = A0;
//int analogPin2 = A1;
int val1;
int val2; 

void setup() {
 
  Serial.begin(57600);  

  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(pinMic,INPUT);
  pinMode(pinMicA,INPUT);
  pinMode(laser1Pin,OUTPUT);
  pinMode(laser2Pin,OUTPUT);
  myservo1.attach(12);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(11);  // attaches the servo on pin 9 to the servo object
  myservo1.write(pos1);
  myservo2.write(pos2);
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  
 digitalWrite(redPin, HIGH);    
 digitalWrite(bluePin, LOW); 
 digitalWrite(greenPin, HIGH);
  
  //Laser Test
  digitalWrite(laser1Pin, HIGH);
  digitalWrite(laser2Pin, HIGH);
  delay(500);
  digitalWrite(laser1Pin, LOW);
  digitalWrite(laser2Pin, LOW);
  delay(500);
  digitalWrite(laser1Pin, HIGH);
  digitalWrite(laser2Pin, LOW);
  delay(500);
  digitalWrite(laser1Pin, LOW);
  digitalWrite(laser2Pin, HIGH);
  delay(500);
  digitalWrite(laser1Pin, LOW);
  digitalWrite(laser2Pin, LOW);
  
   
 

  keypad.addEventListener(ReadKeys); // Add an event listener for this keypad

}

void loop() {
  
   digitalWrite(ledPin, LOW);
   digitalWrite(laser1Pin, LOW);
   digitalWrite(laser2Pin, LOW);
   STATE = 0;   
   STATEM = 0;

char key = keypad.getKey();

}

/*
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
*/


