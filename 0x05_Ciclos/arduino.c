int led_pin = 6; 
int pot_pin = A0;
int output;
int led_value;
void setup() {
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  //Reading from potentiometer
  output = analogRead(pot_pin);
  //Mapping the Values between 0 to 255 because we can give output
  //from 0 -255 using the analogwrite funtion
  led_value = map(output, 0, 1023, 0, 255);
  analogWrite(led_pin, led_value);
  Serial.println(led_value);
  delay(1);
}

