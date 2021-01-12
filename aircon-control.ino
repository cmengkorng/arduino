// set digital pin 2 for ctl to control the relay
int ctl = 2;
// set pin as output
void setup() {
  pinMode(ctl,OUTPUT);
}
// loop
void loop() {
  digitalWrite(ctl, LOW);
  // provide 0V to relay so ac source connect to aircon1
  delay(5*60*60*1000);
  // delay for 5h
  digitalWrite(ctl, HIGH);
  // provide 5V to relay so ac source connect to aircon2
  delay(5*60*60*1000);
}
