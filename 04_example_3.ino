#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  Serial.println(++count);
  toggle = 1; //toggle LED value.
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000 - (time2 - time1));
  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(1000 - (time4 - time3)); // wait for 1,000 milliseconds
}