

const int pushButton = 2;
const int led = 6;
const int sensor = A0;
const int piezo = 8;
int previousButtonState;
int presentButtonState;
int ledState = LOW;
int sensorVal;

void setup() {
  pinMode(pushButton, INPUT);
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(piezo, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  previousButtonState = presentButtonState;
  presentButtonState = digitalRead(pushButton);
  int sensorStatus = analogRead(sensor);
  Serial.println(sensorStatus);

  if (previousButtonState == HIGH && presentButtonState == LOW) {
    ledState = !ledState;
    digitalWrite(led, ledState);
  }

  if (ledState = ledState) {
    sensorVal = analogRead(sensor);
    Serial.println(sensorVal);
    if (sensorVal <= 1000) {
      digitalWrite(piezo, HIGH);
    } else {
      digitalWrite(piezo, LOW);
    }
  }
}
