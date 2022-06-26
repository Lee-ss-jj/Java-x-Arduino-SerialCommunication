int ledPin = 13;
int input;

void setup(){ 
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
} 
 
void loop(){ 
  if (Serial.available() > 0) {
    input = Serial.read();
    Serial.println(input);
    if (input == '0') {
      Serial.println("off");
      digitalWrite(ledPin, LOW);
    } else if (input == '1') {
      Serial.println("on");
      digitalWrite(ledPin, HIGH);
    }
  }
}
