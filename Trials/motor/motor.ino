#define motor1 9

int speed = 115;

void setup(){
  pinMode(motor1, OUTPUT);
  Serial.begin(9600);
  delay(100);
}

void loop(){
  analogWrite(motor1, speed);
}
