int redpin = 4, greenpin = 3, bluepin = 2; // led
int redpin_1 = 8;
int greenpin_1 = 9;
int bluepin_1 = 10;
int redpin_2 = 11;
int greenpin_2 = 12;
int bluepin_2 = 13;
int cds = A0;    // 조도 센서
int cds_val = 0; // 조도 센서 값
int trig = 6;    // 초음파 센서
int echo = 5;    // 초음파 센서

void setup()
{
  Serial.begin(9600);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(redpin_1, OUTPUT);
  pinMode(greenpin_1, OUTPUT);
  pinMode(bluepin_1, OUTPUT);
  pinMode(redpin_2, OUTPUT);
  pinMode(greenpin_2, OUTPUT);
  pinMode(bluepin_2, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  long duration, distance;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 17 / 1000;
  // Serial.println(duration);
  // Serial.println(distance);
  // Serial.println(cds_val);
  cds_val = analogRead(cds);
  if (cds_val > 140)
  {
    setColor(150, 150, 0);
    if (distance <= 5)
    {
      setColor(255, 255, 255);
      delay(10000);
    }
  }
  else
    setColor(0, 0, 0);
}
void setColor(int red, int green, int blue)
{
  analogWrite(redpin, red);
  analogWrite(greenpin, green);
  analogWrite(bluepin, blue);
  analogWrite(redpin_1, red);
  analogWrite(greenpin_1, green);
  analogWrite(bluepin_1, blue);
  analogWrite(redpin_2, red);
  analogWrite(greenpin_2, green);
  analogWrite(bluepin_2, blue);
}