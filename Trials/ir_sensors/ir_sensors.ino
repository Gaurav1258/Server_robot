const int out=5;

float white;

void setup(){
  Serial.begin(9600);
  pinMode(out, INPUT);
}

void loop(){
  white = digitalRead(out);
  Serial.print("high/low = ");
  Serial.print(white);
  Serial.write(10);
  delay(200);
}
