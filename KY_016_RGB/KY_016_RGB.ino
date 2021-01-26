
int R_LED = 12;
int G_LED = 11;
int B_LED = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(R_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(R_LED, HIGH);
  delay(1000);
  digitalWrite(R_LED, LOW);
  
  digitalWrite(G_LED, HIGH);
  delay(1000);
  digitalWrite(G_LED, LOW);
  
  digitalWrite(B_LED, HIGH);
  delay(1000);
  digitalWrite(B_LED, LOW);
}
