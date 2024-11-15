float input_voltage = 0.0;
float temp=0.0;
const int buzzer = 9;


void setup() {
  
    Serial.begin(9600);
  
    pinMode(buzzer, OUTPUT);
  
}


void checkStatus(float volts, bool isconnected) {

    if(volts > 3) { 
  
        Serial.print("!!! SOVRATENSIONE REGISTRATA SULLA BATTERIA !!!");
  
        tone(buzzer, 1000);
    
    }else if(!(isconnected) and volts == 0) {
  
        Serial.print("???!! BATTERIA ASSENTE !!???");
  
  
    }else if(volts < 2) {
        
        Serial.print("!!! CALO DI TENSIONE REGISTRATO SULLA BATTERIA !!!");
    
        tone(buzzer, 1000);

    }

}


void loop() {
  
    noTone(buzzer); 
   
    float analog_value = analogRead(A0);
  	
  	bool isconnected = analogRead(A1);
  
    input_voltage = (analog_value / 1024.0) * 5.0 ; 

  	checkStatus(input_voltage, isconnected);
  	
  
    Serial.print("\nv = ");
    Serial.println(input_voltage, 3);
    

    delay(300);
}