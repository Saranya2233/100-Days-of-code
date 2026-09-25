/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 18 Question: 35
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to print all factors of a given number.
*/
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}
