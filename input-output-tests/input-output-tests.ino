// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if (digitalRead(2)) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(12, HIGH);
    delay(100);
    digitalWrite(12, LOW);
  }

}
