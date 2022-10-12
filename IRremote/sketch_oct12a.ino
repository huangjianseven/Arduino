#include <IRremote.h>
// IRremote by shirriff, z3t0, ArminJo, Version:3.9.0

const int irReceiverPin = 7;
const int ledPin = 13;
IRrecv irrecv(irReceiverPin);
decode_results results;

void setup() {
  pinMode(ledPin,OUTPUT);// put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();

}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&results)){
    Serial.print("irCode:");
    Serial.print(results.value,HEX);
    Serial.print(",bits:");
    Serial.println(results.bits);
    irrecv.resume();
  }

  delay(600);

  if(results.value == 0xFFA25D){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }

}
