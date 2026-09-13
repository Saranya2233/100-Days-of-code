/*
 * Name : Saranya
 * Roll : 590041598
 * Day : 4 Question: 7
 * Date : 13-09-2026
 * 
 * PROBLEM STATEMENT:
 * Write a program to swap two numbers without using a third variable.
 */
#include <stdio.h>
int main()
{
  int a ,b;
  printf("Enter the value of a: ");
  scanf("%d",& a);
  printf("\nEnter the value of b: ");
  scanf("%d",& b);
  printf("\nBefor swapping: a = %d , b = %d" , a,b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("\nAfter swapping: a = %d , b =%d", a,b);
  return 0;
}
