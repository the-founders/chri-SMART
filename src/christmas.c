#include <Servo.h>

int servoPin = A4;
Servo servo;
int angle = 0;
int trig_1 = A1;
int echo_1 = A2;
int led = A3;

void setup()
{
    Serial.begin(9600);
    pinMode(trig_1, OUTPUT);
    pinMode(echo_1, INPUT);
    pinMode(led, OUTPUT);
    servo.attach(servoPin);
}

void loop()
{
    santa();
    ludolph();
}

void santa()
{
    for (angle = 30; angle < 100; angle++)
    {
        servo.write(angle);
        delay(15);
    }
    for (angle = 100; angle > 30; angle--)
    {
        servo.write(angle);
        delay(15);
    }
}

void ludolph()
{
    long duration_1, distance_1;
    digitalWrite(trig_1, LOW);
    delayMicroseconds(2);
    digitalWrite(trig_1, HIGH);
    delayMicroseconds(5);
    digitalWrite(trig_1, LOW);

    duration_1 = pulseIn(echo_1, HIGH);
    distance_1 = duration_1 * 17 / 1000;
    Serial.println(duration_1);
    Serial.println(distance_1);

    if (distance_1 <= 5)
    {
        digitalWrite(led, HIGH);
    }
    else
    {
        digitalWrite(led, LOW);
        delay(100);
    }
}