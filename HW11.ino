int led1Sec = 2;
int led5Sec = 3;
int led10Sec = 4;
int led15Sec = 5;
int led30Sec = 6;
int led60Sec = 7;

int state1Sec = LOW;
int state5Sec = LOW;
int state10Sec = LOW;
int state15Sec = LOW;
int state30Sec = LOW;
int state60Sec = LOW;

void setup() {
  pinMode(led1Sec, OUTPUT);
  pinMode(led5Sec, OUTPUT);
  pinMode(led10Sec, OUTPUT);
  pinMode(led15Sec, OUTPUT);
  pinMode(led30Sec, OUTPUT);
  pinMode(led60Sec, OUTPUT);
}

void loop() {
  int currentMillis = millis() % 60000; 
  if (currentMillis % 1000 < 500) { 
    digitalWrite(led1Sec, HIGH);
  } else {
    digitalWrite(led1Sec, LOW);
  }

  if (currentMillis % 5000 < 2500) { 
    digitalWrite(led5Sec, HIGH);
  } else {
    digitalWrite(led5Sec, LOW);
  }

  if (currentMillis % 10000 < 5000) { 
    digitalWrite(led10Sec, HIGH);
  } else {
    digitalWrite(led10Sec, LOW);
  }

  if (currentMillis % 15000 < 7500) {
    digitalWrite(led15Sec, HIGH);
  } else {
    digitalWrite(led15Sec, LOW);
  }

  if (currentMillis % 30000 < 15000) { 
    digitalWrite(led30Sec, HIGH);
  } else {
    digitalWrite(led30Sec, LOW);
  }

  if (currentMillis < 30000) { 
    digitalWrite(led60Sec, HIGH);
  } else {
    digitalWrite(led60Sec, LOW);
  }
}
