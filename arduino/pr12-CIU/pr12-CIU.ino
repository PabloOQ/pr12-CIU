int maxi = 600;
int mini = 0;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int current = analogRead(A0);
  if (maxi > current){
    maxi = current;
  }else if(current > mini){
    mini = current;
  }
  Serial.println(current);

  delay(100);
}
