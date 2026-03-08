// Accident Detection System Simulation

int sensorPin = 5;
int buzzer = 6;
int led = 7;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int sensorValue = digitalRead(sensorPin);

  if(sensorValue == HIGH) {
    Serial.println("Accident Detected!");

    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);

    delay(3000);

    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }

  delay(100);
}