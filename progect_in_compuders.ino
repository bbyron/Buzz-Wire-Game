void setup() {
  // put your setup code here, to run once:
  pinMode(11, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(3, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int button = digitalRead(11);
  Serial.println(button);
  delay(100);
  if(button == 1)
  
  {
  digitalWrite(9, HIGH);  
  digitalWrite(3, LOW);
  
  }
   else {
   digitalWrite(3, HIGH);
   digitalWrite(9, LOW);
   digitalWrite(8, LOW)
   }
  
}
