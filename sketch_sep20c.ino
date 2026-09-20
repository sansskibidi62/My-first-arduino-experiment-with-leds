void setup() {
 pinMode(13, OUTPUT);
 pinMode(7, INPUT_PULLUP);
}
void loop() {
  if (digitalRead(7) == LOW) {
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
    } else {
      digitalWrite(13,HIGH);
      delay(3000);
      digitalWrite(13,LOW);
      delay(3000);
      }

  }
