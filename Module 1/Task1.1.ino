int pir = 2;
int led = 4;
int buzz = 8;
int sensorvalue = 0;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorvalue = digitalRead(pir);
 if(sensorvalue == HIGH)
 {
   digitalWrite(led, HIGH);
   digitalWrite(buzz, HIGH);
   Serial.println("Motion Detected!");
     
   delay(1000);
 }
  else
  {
   digitalWrite(led, LOW);
   digitalWrite(buzz, LOW);
  }
  delay(100);
}