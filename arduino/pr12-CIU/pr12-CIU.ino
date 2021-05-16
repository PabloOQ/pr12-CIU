int mini = 600;
int maxi = 0;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int current = analogRead(A0);
  if (mini > current){
    mini = current;
  }else if(current > maxi){
    maxi = current;
  }
  Serial.println(current);

  delay(100);
}
