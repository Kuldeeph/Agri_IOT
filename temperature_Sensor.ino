float tempC = 0;
int temp_value;
int tempPin = 1;

void setup() 
{
  analogReference(INTERNAL1V1);
  Serial.begin(9600);
}

void loop() 
{
  temp_value = analogRead(tempPin);
  tempC = temp_value/ 9.31;
  Serial.println(tempC);
  delay(1000);
}
