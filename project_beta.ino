#include <Servo.h>

Servo myservo;
const int pushButton = 2;
const int pushButton2 = 6;

int previousButtonState;
int presentButtonState;

void setup() {
  pinMode(pushButton, INPUT);
  pinMode(pushButton2, INPUT);
  myservo.attach (4);
  Serial.begin(9600);
}

void loop() {
  //previousButtonState = presentButtonState;
  //presentButtonState = digitalRead(pushButton);

  if (digitalRead(buttonPin)==HIGH){
    myservo.write(135);
  }else if (digitalRead(buttonPin2)==HIGH){
    myservo.write(45);
  }else{
    myservo.write(90);
  }
}
