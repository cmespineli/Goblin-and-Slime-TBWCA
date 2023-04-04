

const int pushButton = 2;
const int led = 6;

int previousButtonState;
int presentButtonState;
int ledState = LOW;

void setup() {
  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  previousButtonState = presentButtonState;
  presentButtonState = digitalRead(pushButton);

  if (previousButtonState == HIGH && presentButtonState == LOW) {
    ledState = !ledState;
    digitalWrite(led, ledState);
  }
