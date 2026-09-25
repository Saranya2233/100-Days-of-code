/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 21 Question: 41
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = (int)log10(n);
    power = (int)pow(10, digits);

    first = n / power;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}
