/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 22 Question: 43
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT: Write a program to check if a number is a strong number.
 */
#include <stdio.h>

int main()
{
    int n, original, digit, i, factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;

        factorial = 1;
        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        n = n / 10;
    }

    if (sum == original)
        printf("The number is a Strong number.");
    else
        printf("The number is not a Strong number.");

    return 0;
}
