/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 19 Question: 37
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to find the LCM of two numbers.
*/
#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        lcm = a;
    else
        lcm = b;

    for (i = lcm; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}
