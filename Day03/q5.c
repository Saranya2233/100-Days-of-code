/*
 * Name : Saranya
 * Roll : 590041598
 * Day : 3 Question: 5
 * Date : 13-09-2026
 *
 * PROBLEM STATEMENT:
 *Write a program to convert temperature from Celsius to Fahrenheit.
 */

#include <stdio.h>
int main()
{
  float celsius, Fahrenheit;

  scanf("%f", & celsius);

  Fahrenheit = (celsius * 9 / 5) + 32;

  printf("Fahrenheit = %f",Fahrenheit);

  return 0;
}
