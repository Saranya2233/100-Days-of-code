/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 13 Question: 26
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to print numbers from 1 to n.
 */
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
