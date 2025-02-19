//c code 
//define pin modes
int red=4;
int yellow=3;
int green=2;
//setup
void setup(){
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}
void loop(){
  //for red light
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red,LOW); 
 // for green light
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  //for yellow light
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
}