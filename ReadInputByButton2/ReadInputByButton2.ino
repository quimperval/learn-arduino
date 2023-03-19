/**
 * Connect the button in the orientation
 *  |o|   |o|
 *  | |   | |
 *  | |   | |
 *  | |   | |
 *  | |   | |
 *  |o|   |o|
 */
int BUTTON_PIN = 2;
int LED_PIN = 3;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  
  while(digitalRead(BUTTON_PIN)==LOW){
    //wait until the button is pressed
  }

  digitalWrite(LED_PIN, HIGH);//turn on the led
  delay(5000); //waits 5 seconds
  digitalWrite(LED_PIN, LOW); //turn off the led
  while(digitalRead(BUTTON_PIN)==HIGH){
      
  }
}
