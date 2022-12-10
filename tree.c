#include <Servo.h>
Servo myServo;

int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int ServoPin = 6;
int noisePin = A0;
int angle = 0;

void setup()
{
    // put your setup code here, to run once:
    pinMode(noisePin, INPUT);
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(ServoPin, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    int value = analogRead(noisePin);
    Serial.println(value);

    if (value < 60)
    {
        digitalWrite(redPin, LOW);
        digitalWrite(greenPin, LOW);
        digitalWrite(bluePin, LOW);
    }
    else
    {
        digitalWrite(redPin, HIGH);
        digitalWrite(greenPin, HIGH);
        digitalWrite(bluePin, HIGH);
    }
}