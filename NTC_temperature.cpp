#include <math.h>
#define led 2

void setup(){
	Serial.begin(9600);
	pinMode(led,OUTPUT);
}
double Termistor(int anlgRead){
	
	double temperature;
	
	temperature = log((10240000 / anlgRead) - 10000)); //steinhart hart Equitation
	temperature = 1 /(0.001129148 + (0.000234125 + (0.00000007641 * temperature *temperature))*temperature);
	//kelvin ---> degrees Celsius
	temperature = temperature - 273.15;
	return temperature;
}

void loop(){

	int	value = analogRead(A0);
	double temperature = Termistor(value);
	Serial.println(temperature);
	
	if(temperature>30){
		
		digitalWrite(led,HIGH);
		
	}
	else{
		digitalWrite(led,LOW);
	}
	 	
}
