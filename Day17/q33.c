/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 17 Question: 33
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to check if a number is an Armstrong number.
*/
#include <stdio.h>

int main()
{
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if (sum == original)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");

    return 0;
}
