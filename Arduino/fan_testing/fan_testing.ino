#define motorPin 11
void setup() { 
    pinMode(motorPin,OUTPUT);
    analogWrite(motorPin,0);
}

void loop() {
    analogWrite(motorPin, map(8,0,9,0,255));
}
