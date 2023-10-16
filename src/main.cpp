#include <Arduino.h>
int begin = B10000000;
int end;
uint8_t led1;
uint8_t led2;
uint8_t led3;
uint8_t led4;
uint8_t led5;
uint8_t led6;
uint8_t led7;
uint8_t led8;
void bat1(uint8_t led1)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, led1);
  PORTB = B00000100;
}
void bat2(uint8_t led2)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, led2);
  PORTB = B00000100;
}
void bat3(uint8_t led3)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, led3);
  PORTB = B00000100;
}
void bat4(uint8_t led4)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, led4);
  PORTB = B00000100;
}
void bat5(uint8_t led5)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, led5);
  PORTB = B00000100;
}
void bat6(uint8_t led6)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, led6);
  PORTB = B00000100;
}
void bat7(uint8_t led7)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, led7);
  PORTB = B00000100;
}
void bat8(uint8_t led8)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, led8);
  PORTB = B00000100;
}
void endless(uint8_t end)
{
  PORTB = B00000000;
  shiftOut(11, 13, LSBFIRST, end);
  PORTB = B00000100;
}

void setup()
{
  DDRB = B11111111;
  led1 = begin;
  led2 = begin | (begin >> 1);
  led3 = (begin | (begin >> 1)) | begin >> 2;
  led4 = ((begin | (begin >> 1)) | begin >> 2) | begin >> 3;
  led5 = (((begin | (begin >> 1)) | begin >> 2) | begin >> 3) | begin >> 4;
  led6 = ((((begin | (begin >> 1)) | begin >> 2) | begin >> 3) | begin >> 4) | begin >> 5;
  led7 = (((((begin | (begin >> 1)) | begin >> 2) | begin >> 3) | begin >> 4) | begin >> 5) | begin >> 6;
  led8 = ((((((begin | (begin >> 1)) | begin >> 2) | begin >> 3) | begin >> 4) | begin >> 5) | begin >> 6) | begin >> 7;
  end = begin & (begin >> 1);
}

void loop()
{

  bat1(led1);
  delay(1000);
  bat2(led2);
  delay(1000);
  bat3(led3);
  delay(1000);
  bat4(led4);
  delay(1000);
  bat5(led5);
  delay(1000);
  bat6(led6);
  delay(1000);
  bat7(led7);
  delay(1000);
  bat8(led8);
  delay(1000);
  endless(end);
  delay(1000);
}
