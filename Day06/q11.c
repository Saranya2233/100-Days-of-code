/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 6 Question: 11
 * Date : 13-09-2026
 * 
 * PROBLEM STATEMENT:Write a program to input an integer and check whether it is even or odd using if–else.
 */

#include<stdio.h>
int main()
{
int i;
printf("Enter a value: ");
scanf("%d" , & i);
if ( i % 2 == 0)
{
printf("Its an even number");
}
else 
{ 
printf("Its an odd number");
}
return 0;
}
