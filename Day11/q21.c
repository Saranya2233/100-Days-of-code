/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 11 Question: 21
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to input an integer and check whether it is even or odd using if–else.
 */ 

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("The number is even.");
    else
        printf("The number is odd.");

    return 0;
}
