float temp;
void setup() {
  Serial.begin(9600);
}

void loop() {
  temp= analogRead(AC);
  tem= temp *5000 /1023 / 10;
  Serial.println(temo);
  delay(500);

}
