int BP = A0;
int BP2 = A1;
int value;
void setup() {
  // put your setup code here, to run once:
pinMode(BP,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value = analogRead(BP);
Serial.print(value);
Serial.print("              ");
Serial.println(analogRead(BP2));
delay(500);
}

