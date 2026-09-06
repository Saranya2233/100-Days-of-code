/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 1 Question: 2
 * Date : 06-09-2026
 * 
 * PROBLEM STATEMENT:
 * Write a program to input two numbers and display their
 * sum, difference, product, and quotient.
 */

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n",
           a + b, a - b, a * b, a / b);

    return 0;
}

