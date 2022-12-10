#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
#include <DHT.h>
#include <DHT_U.h>

#define bu 6
#define DHTPIN 7
#define DHTTYPE DHT11

hd44780_I2Cexp lcd;
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
    Serial.begin(9600);
    lcd.begin(16, 2);
    dht.begin();
    pinMode(bu, OUTPUT);
}

void loop()
{
    lcdh();
    carol();
}

void lcdh()
{
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(t);
    lcd.print("C");
    lcd.setCursor(0, 1);
    lcd.print("Hum: ");
    lcd.print(h);
    lcd.print("%");
    delay(300);
}
void ss(int hz, int de)
{
    tone(bu, hz);
    delay(de);
    noTone(bu);
}
void mdo(int bak)
{
    ss(262, bak);
}
void mdos(int bak)
{
    ss(277, bak);
}
void mre(int bak)
{
    ss(294, bak);
}
void mres(int bak)
{
    ss(311, bak);
}
void mme(int bak)
{
    ss(330, bak);
}
void mfa(int bak)
{
    ss(349, bak);
}
void mfas(int bak)
{
    ss(370, bak);
}
void msol(int bak)
{
    ss(392, bak);
}
void msols(int bak)
{
    ss(415, bak);
}
void mra(int bak)
{
    ss(440, bak);
}
void mras(int bak)
{
    ss(466, bak);
}
void msi(int bak)
{
    ss(494, bak);
}
void mddo(int bak)
{
    ss(523, bak);
}
void mddos(int bak)
{
    ss(554, bak);
}
void mrre(int bak)
{
    ss(587, bak);
}

void carol()
{
    msol(125);
    mra(250);
    msol(125);
    mme(250);
    mddo(250);
    mra(250);
    msol(750);
    msol(125);
    mra(125);
    msol(125);
    mra(125);
    msol(250);
    mddo(250);
    msi(750);
    delay(250);
    mfa(125);
    msol(250);
    mfa(125);
    mre(250);
    msi(250);
    mra(250);
    msol(750);
    msol(125);
    mra(125);
    msol(125);
    mra(125);
    msol(250);
    mra(250);
    mme(750);
    delay(250);
    msol(125);
    mra(250);
    msol(125);
    mme(250);
    mddo(250);
    mra(250);
    msol(750);
    msol(125);
    mra(125);
    msol(125);
    mra(125);
    msol(250);
    mddo(250);
    msi(750);
    delay(250);
    mfa(125);
    msol(250);
    mfa(125);
    mre(250);
    msi(250);
    mra(250);
    msol(750);
    msol(125);
    mra(125);
    msol(125);
    mra(125);
    msol(250);
    mrre(250);
    mddo(750);
    delay(250);
    mra(250);
    mra(250);
    mddo(250);
    mra(250);
    msol(250);
    mme(250);
    msol(500);
    mfa(250);
    mra(250);
    msol(250);
    mfa(250);
    mme(750);
    delay(250);
    mre(250);
    mme(250);
    msol(250);
    mra(250);
    msi(250);
    msi(250);
    msi(500);
    mddo(250);
    mddo(250);
    msi(250);
    mra(250);
    msol(250);
    mfa(250);
    mre(500);
    msol(125);
    mra(250);
    msol(125);
    mme(250);
    mddo(250);
    mra(250);
    msol(750);
    msol(125);
    mra(125);
    msol(125);
    mra(125);
    msol(250);
    mddo(250);
    msi(750);
    delay(250);
    mfa(125);
    msol(250);
    mfa(125);
    mre(250);
    msi(250);
    mra(250);
    msol(750);
    msol(125);
    mra(125);
    msol(125);
    mra(125);
    msol(250);
    mrre(250);
    mddo(750);
    delay(250);
}