/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 15 Question: 29
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to calculate the factorial of a number.
 */
#include <stdio.h>

int main()
{
    int n, i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d", n, factorial);

    return 0;
}
