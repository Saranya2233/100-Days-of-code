/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 14 Question: 28
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to print the product of even numbers from 1 to n.
 */
#include <stdio.h>

int main()
{
    int n, i;
    int product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %d", n, product);

    return 0;
}
