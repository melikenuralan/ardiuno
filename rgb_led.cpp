int ledpin1 = 9;
int ledpin2 = 10;
int ledpin3 = 11;

void setup(){
	pinMode(ledpin1,OUTPUT);
	pinMode(ledpin2,OUTPUT);
	pinMode(ledpin3,OUTPUT);
}

void loop(){
	analogWrite(ledpin1,238);
	analogWrite(ledpin2,28);
	analogWrite(ledpin3,137);
	
	delay(800);
	
	analogWrite(ledpin1,0);
	analogWrite(ledpin2,0);
	analogWrite(ledpin,138);
	
	delay(800);
	
	analogWrite(ledpin1,71);
	analogWrite(ledpin2,60);
	analogWrite(ledpin3,139);
	
	delay(800);
}
