int pir = 2;
int led = 4;
int buzz = 8;

void setup()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);

  attachInterrupt(digitalPinToInterrupt(pir), motionDetected, HIGH);
}

void loop()
{
  
}

void motionDetected()
{
  digitalWrite(led, HIGH);
  digitalWrite(buzz, HIGH);
  Serial.println("Motion Detected!");

  delay(1000);

  digitalWrite(led, LOW);
  digitalWrite(buzz, LOW);
}
