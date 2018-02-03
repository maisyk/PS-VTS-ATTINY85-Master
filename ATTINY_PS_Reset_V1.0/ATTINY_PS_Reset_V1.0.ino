static int ARDUINO_RESET_DELAY = 10000;
static int ARDUINO_PIN = 1;
static int FULL_RESET_PIN = 2;

void setup() {
  
  pinMode(ARDUINO_PIN, OUTPUT);
  pinMode(FULL_RESET_PIN, OUTPUT);
  
  digitalWrite(ARDUINO_PIN, LOW);
  digitalWrite(FULL_RESET_PIN, LOW);
  static int GPRS_RESET_DELAY = 10000;

  delay(ARDUINO_RESET_DELAY);
  resetArduino();
}

void loop(){
  delay(3600000);
  resetProjectSnowy();
  delay(ARDUINO_RESET_DELAY);
  resetArduino();
}

void resetArduino(){
  digitalWrite(ARDUINO_PIN, HIGH);
  delay(1000);
  digitalWrite(ARDUINO_PIN, LOW);
}

void resetProjectSnowy(){
  digitalWrite(FULL_RESET_PIN, HIGH);
  delay(4000);
  digitalWrite(FULL_RESET_PIN, LOW);
  delay(10000);
  setup();
}
