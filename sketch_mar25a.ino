// these constants won't change
int wert = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  wert = analogRead(A0);
  // Serial.println(wert);
  if (wert >= 1) {
    Serial.println("Klopf Klopf");
    Serial.println(wert);
  }
}
