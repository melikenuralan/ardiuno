#define echoPin 6
#define trigPin 7
#define buzzerPin 8

int maximumRange = 50;
int minumumRange = 0;

void setup(){
	
	pinMode(trigPin,OUTPUT);
	pinMode(echoPin,INPUT);
	pinMode(buzzerPin,OUTPUT);
	
}

void loop(){
	
	int measure = distance(maximRange,minumumRange);
	
	melody(measure*10);
	
}

int distance(int maxrange,int minrange)
{
	long duration,distance;
	digitalWrite(trigPin,LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin,HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin,LOW);
	
	duration = pulseIn(echoPin,HIGH);
	distance = duration /58.2;
	delay(50);
	
	if(distance>=maxrange || distance<=minrange)
	return 0;
	return distance; //bu şekilde if kullanım vardır 
	
}
int melody(int dly){
	tone(buzzerPin,440);//440 değiştirebilirsiniz!!
	noTone(buzzerPin);
	delay(dly);
}
