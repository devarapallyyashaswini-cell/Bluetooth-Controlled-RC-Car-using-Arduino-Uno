// Bluetooth RC Car Controller
// Arduino Uno + HC-05 + L298N

char command = '\0';

// Motor pins
const int LEFT_FORWARD  = 7;
const int LEFT_BACKWARD = 6;
const int RIGHT_FORWARD = 5;
const int RIGHT_BACKWARD = 4;

void stopCar() {
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(LEFT_BACKWARD, LOW);
  digitalWrite(RIGHT_FORWARD, LOW);
  digitalWrite(RIGHT_BACKWARD, LOW);
}

void moveForward() {
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(LEFT_BACKWARD, LOW);
  digitalWrite(RIGHT_FORWARD, HIGH);
  digitalWrite(RIGHT_BACKWARD, LOW);
}

void moveBackward() {
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(LEFT_BACKWARD, HIGH);
  digitalWrite(RIGHT_FORWARD, LOW);
  digitalWrite(RIGHT_BACKWARD, HIGH);
}

void turnLeft() {
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(LEFT_BACKWARD, HIGH);
  digitalWrite(RIGHT_FORWARD, HIGH);
  digitalWrite(RIGHT_BACKWARD, LOW);
}

void turnRight() {
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(LEFT_BACKWARD, LOW);
  digitalWrite(RIGHT_FORWARD, LOW);
  digitalWrite(RIGHT_BACKWARD, HIGH);
}

void setup() {
  Serial.begin(9600);

  pinMode(LEFT_FORWARD, OUTPUT);
  pinMode(LEFT_BACKWARD, OUTPUT);
  pinMode(RIGHT_FORWARD, OUTPUT);
  pinMode(RIGHT_BACKWARD, OUTPUT);

  stopCar();
}

void loop() {
  if (!Serial.available()) {
    return;
  }

  command = Serial.read();

  if (command == 'F') {
    moveForward();
  }
  else if (command == 'B') {
    moveBackward();
  }
  else if (command == 'L') {
    turnLeft();
  }
  else if (command == 'R') {
    turnRight();
  }
  else if (command == 'S') {
    stopCar();
  }
}