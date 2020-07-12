void setup()
{
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(A1,INPUT);
}
void loop()
{
  float temperature;
  temperature=analogRead(A1);
  float tempmv=temperature*5000/1024;
  float tempc=(tempmv/10)+(-50);
  if(tempc<20)
  {
    analogWrite(9,0);
    delay(1000);
  }
  else if(tempc>20&&tempc<=25)
  {
    analogWrite(9,100);
    delay(1000);
  }
  else if(tempc>25&&tempc<=30)
  {
    analogWrite(9,150);
    delay(1000);
  }
  else if(tempc>30&&tempc<=35)
  {
    analogWrite(9,200);
    delay(1000);
  }
  else
  {
    analogWrite(9,255);
    delay(1000);
  }
} 