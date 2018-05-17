
int ledc = 13;  
int sensorPin = 0;
int period = 100;
int change, oldvalue, value;
void setup ()
{
  pinMode(ledc, OUTPUT);
  Serial.begin (9600);
}
void loop ()
{
  value = analogRead (sensorPin);
  change = abs(oldvalue - value);
  if(change >= 2 )
  {
    Serial.println (change);
    analogWrite(ledc, 0); 
  }
  else
  { 
    analogWrite(ledc,255); 
  }
  oldvalue = value;
  delay (period);
}
