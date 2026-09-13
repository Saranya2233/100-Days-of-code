/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 5 Question: 9
 * Date : 13-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to calculate simple and compound interest for given principal, rate, and time.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, ci;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f", ci);

    return 0;
}

