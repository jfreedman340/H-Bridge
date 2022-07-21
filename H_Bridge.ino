// Motor A
int enA = 9;
int in1 = 4;
int in2 = 5;

void setup(){
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  }

void demoOne(){
  // Turn motor A on

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  analogWrite(enA, 50);

  delay(500);

  // Reverse direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  delay(500);
  
  // Turn off
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}


void loop(){
  demoOne();
  delay (50);
}
