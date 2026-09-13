/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 4 Question: 8
 * Date : 13-09-2026
 * 
 * PROBLEM STATEMENT: Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>
int main()
{
int n, i, sum = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
sum = sum + i;
}
printf("sum = %d", sum);
return 0 ;
}
