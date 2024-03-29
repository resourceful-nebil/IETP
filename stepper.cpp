#define STEPPIN 12
#define DIRPIN 11
#define ENAPIN 10

const int STEPTIME = 2; // Increase this value for slower speed

void setup() {
  // put your setup code here, to run once:
  pinMode(STEPPIN, OUTPUT);
  pinMode(DIRPIN, OUTPUT);
  pinMode(ENAPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int k;
  int revCount = 15;
  
  for (k = 0; k < revCount; k++) {
    forward(200);
  }
  
  for (k = 0; k < revCount; k++) {
    reverse(200);
  }
}

void forward(int steps) {
  int i;
  digitalWrite(ENAPIN, LOW); // ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN, HIGH); // SET DIRECTION 
  for (i = 0; i < steps; i++) {
    digitalWrite(STEPPIN, HIGH);
    delay(STEPTIME);
    digitalWrite(STEPPIN, LOW);
    delay(STEPTIME);
  }
  digitalWrite(ENAPIN, HIGH); // DISABLE STEPPER
}

void reverse(int steps) {
  int i;
  digitalWrite(ENAPIN, LOW); // ENABLE IS ACTIVE LOW
  digitalWrite(DIRPIN, LOW); // SET DIRECTION 
  for (i = 0; i < steps; i++) {
    digitalWrite(STEPPIN, HIGH);
    delay(STEPTIME);
    digitalWrite(STEPPIN, LOW);
    delay(STEPTIME);
  }
  digitalWrite(ENAPIN, HIGH); // DISABLE STEPPER
}
