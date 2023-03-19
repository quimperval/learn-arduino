void setup() {
  //13 is the led port, connected by default to port 13.
  pinMode(13, OUTPUT);
}
//This run forever as the arduino has energy to run.
void loop() {
  //Indicate what is the point where we are putting the output, and a High value equivalent to 5V output.
  digitalWrite(13, HIGH);
  //delay the output 1s (1000 millis)
  delay(1000);
  //Send a 0V to the output port
  digitalWrite(13, LOW);
  delay(1000);
}
