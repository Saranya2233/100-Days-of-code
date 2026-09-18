/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 8 Question: 16
 * Date : 18-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to input three numbers and find the largest among them using if–else.
 */
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d is the largest.", a);
    else if (b > a && b > c)
        printf("%d is the largest.", b);
    else
        printf("%d is the largest.", c);

    return 0;
}
