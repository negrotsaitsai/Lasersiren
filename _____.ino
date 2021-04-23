int buzzPin=11;
int LED=13;
void setup(){
  pinMode(buzzPin,OUTPUT);
  pinMode(LED,OUTPUT);
}
void loop(){
  if(analogRead(0)>850){
    //數據要依光敏電阻的結果而定
    digitalWrite(buzzPin,HIGH);
    digitalWrite(LED,HIGH);
    delay(1000);
    digitalWrite(buzzPin,LOW);
    digitalWrite(LED,HIGH);
    }else{
      digitalWrite(buzzPin,LOW);
      digitalWrite(LED,LOW);
    }
}
