int LED_PIN = 3;
int BRILLO;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  //Starts to send singal to the output increasing the intensity of the light in the led
  for(BRILLO=0; BRILLO<256; BRILLO++){
    analogWrite(LED_PIN, BRILLO);  
    delay(15);
  }
  //Starts decreasing the intensity of the light in the led
  for(BRILLO=255; BRILLO>=0; BRILLO--){
    analogWrite(LED_PIN, BRILLO);  
    delay(15);
  }
}
