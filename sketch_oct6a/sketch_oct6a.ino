bool pushButton1;
bool State;
int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  pushButton1 = digitalRead(2);
  State = digitalRead(ledPin);
  
  if(!pushButton1 && State==LOW){
    digitalWrite(ledPin,HIGH);
   
      
    
  }else if(!pushButton1 && State==HIGH){
    digitalWrite(ledPin,LOW);
  }
  
  
}



