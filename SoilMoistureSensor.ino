
int analog_moisture_Input_sense = 0; // Soil Sensor input at Analog PIN A0
int analog_temperature_input_sense = 1;
int moisture_value = 0;
int temperature_read;
float temperature_value = 0;

void setup() 
  {
     analogReference(INTERNAL1V1);
     Serial.begin(9600);
    
  }

void loop() 
  {
     moisture_value= analogRead(analog_moisture_Input_sense);
     moisture_value= moisture_value/10;

     temperature_read = analogRead(analog_temperature_input_sense);
     temperature_value = temperature_read/ 9.31;


     Serial.println("SOIL MOISTURE SENSOR");
     Serial.println(moisture_value);
     Serial.println("-----------------------------");
     Serial.println("TEMPERATURE SENSOR");
     Serial.println(temperature_value);
     Serial.println("-----------------------------");
     moisture_value = 0;
     temperature_value = 0;
     delay(1000);
     
  }
