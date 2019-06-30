
float Max = 0;
float Min = 0;
int Max_Count = 0;
int Min_Count = 0;
int pressure = 0;
float Max_Value = 0;
float Min_Value = 0;
float ref = 0;

void setup() {


  Serial.begin(9600);
  for(int i = 0 ; i < 100 ; i++){
  //ref = ref + analogRead(A3); 
  ref = ref + random(110,140);
  delay(50);
  } 
  ref = ref / 100;
}

void loop()
{

  //int pressure = analogRead(A3);
   int pressure = random(40,140);

  if (pressure > ref+7 and pressure < 2*ref) 
  {
    Max = Max + pressure;
    Max_Count = Max_Count + 1;
  }
  else if (pressure < ref-7 and pressure > ref/2)
  {
    Min = Min + pressure;
    Min_Count = Min_Count + 1;
  }
  if (Max_Count > 0)
  {
    Max_Value = ((Max / Max_Count) );
  }
  if (Min_Count > 0)
  {
    Min_Value = (Min / Min_Count) *.9;

  }



    Serial.print("    Blood Pressure =    ");
    int PH = Max_Value;
    int PL = Min_Value;
    Serial.print(PH);
    Serial.print('/');
    Serial.print(PL);
    Serial.print("          " );
    Serial.println(pressure);
    Serial.println(ref);
 
}




