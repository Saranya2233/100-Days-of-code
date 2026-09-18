/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 5 Question: 10
 * Date : 13-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to input a year and check whether it is a leap year or not using conditional statements.
 */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("The year is a leap year.");
    else if (year % 100 == 0)
        printf("The year is not a leap year.");
    else if (year % 4 == 0)
        printf("The year is a leap year.");
    else
        printf("The year is not a leap year.");

    return 0;
}
