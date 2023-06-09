const int trigPin = 2;
const int echoPin = 3;
const int ledPin = 4;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  if (distance < 10) {
    digitalWrite(ledPin, HIGH); // Turn on LED or activate buzzer
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED or deactivate buzzer
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(500);
}
