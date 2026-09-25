/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 15 Question: 30
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to reverse a given number.
 */
#include <stdio.h>

int main()
{
    int n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Reverse of the number = %d", reverse);

    return 0;
}

