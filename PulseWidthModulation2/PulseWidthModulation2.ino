int LED_PIN = 3;
int BRILLO; //its range is 0-255
int POT=0; //its range is 0-1023
void setup() {
  pinMode(LED_PIN, OUTPUT);
  //The analogic input is not declared because it does not require initialization.
}

void loop() {
  //Starts to send singal to the output increasing the intensity of the light in the led
  //Arduino uses a range of values 0-1023 when receiving an analogic input
  BRILLO =  analogRead(POT)/4;
  analogWrite(LED_PIN, BRILLO);
}
