String command;
//const int led = 5; If you want to connect extern led


void setup() {
  Serial.begin(9600); 
  pinMode(LED_BUILTIN, OUTPUT); // This will use built in led on pin 13 on your board
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    if (command == "pali") digitalWrite(LED_BUILTIN, HIGH);
    else if (command == "gasi") digitalWrite(LED_BUILTIN, LOW);
    else Serial.println("Pogresna komanda!");
  }
}
