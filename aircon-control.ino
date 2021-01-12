// set digital pin 2 for aircon1 and pin 3 for aircon2
int aircon1 = 2;
int aircon2 = 3;
// set pin as output
void setup() {
  pinMode(aircon1,OUTPUT);
  pinMode(aircon2,OUTPUT);
}
// loop
// HIGH is assign 5V to OUTPUT pin
// LOW is assign 0V to OUTPUT pin
// delay(5*60*60*1000) is equal to 5h delay
void loop() {
  digitalWrite(aircon1, HIGH);
  digitalWrite(aircon2, LOW);
  delay(5*60*60*1000);
  digitalWrite(aircon1, LOW);
  digitalWrite(aircon2, HIGH);
  delay(5*60*60*1000);
}
