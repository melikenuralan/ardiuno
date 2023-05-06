//sequentially turning on LEDs

int ledArray[] = {2,3,4,5,6,7};

void setup()
{
	for( int i=0 ; i<6 ; i++ ){
		
		pinMode(ledArray[i],OUTPUT);
		
	}
	
}


void loop()
{
	for( int i=0 ; i<6 ; i++ ){   //forward
		
		digitalWrite(ledArray[i],HIGH);
		delay(50);
		
		digitalWrite(ledArray[i],LOW);
		
	}
	
	for( int j=5 ; j>=0 ; j-- ){   //backward
	
	digitalWrite(ledArray[j],HIGH);
	delay(50);
	digitalWrite(ledArray[j],LOW);
	
}
