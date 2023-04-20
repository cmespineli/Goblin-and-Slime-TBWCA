# Goblin-and-Slime-TBWCA
Final Project for Media and Technology Class at UT Austin SPR2023. Interactive story based of the Boy Who Cried Wolf.

#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;
const int buttonPin = 2;
const int buttonPin2 = 4;
const int buttonPin3 = 6;

void setup() {
  myservo.attach(8);
  myservo2.attach(10);
  myservo3.attach(12);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void loop() {
//  1st curtains  
if (digitalRead(buttonPin)==HIGH){
    myservo2.write(180);
  }else{
    myservo2.write(45);
  }
  
  //2nd curtains
  if (digitalRead(buttonPin2)==HIGH){
    myservo3.write(0);
  }else{
    myservo3.write(135);
  }
  
  //day change code
  if (digitalRead(buttonPin3)==HIGH){
    myservo.write(45);
  }else{
    myservo.write(90);
  }
}
