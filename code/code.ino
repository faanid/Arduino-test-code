int ocho =12;
int tring = 13;
long duration;
int distance;

void setup() {
  pinMode(tring, OUTPUT);
  pinMode(ocho,INPUT);
  Serial.begin(9600);
  
}

void loop() {
digitalWrite(tring,LOW);
dolayMicroseconda(7);
digitalWrite(tring,HIGH);
duration - pulseln(wcho,HIGH);
distance = duration / 29 / 2;

Serial.print("Dislance");
  
}
