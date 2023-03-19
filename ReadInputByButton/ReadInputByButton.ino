int BUTTON_PIN = 2;
int LED_PIN = 3;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  
}

void loop() {
  if(digitalRead(BUTTON_PIN)==HIGH){
    digitalWrite(LED_PIN,HIGH);   
  } else {
    digitalWrite(LED_PIN, LOW);  
  }
}
