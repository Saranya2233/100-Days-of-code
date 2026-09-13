/*
 * Name : Saranya
 * Roll : 590041598
 * Day : 3 Question: 6
 * Date : 06-09-2026
 *
 *PROBLEM STATEMENT:
 *Write a program to swap two numbers using a third variable.
 */

#include <stdio.h>
int main()
{
  int a, b, temp ;

  printf("Enter the value of a: ");

  scanf("%d", & a);

  printf("\nEnter the value of b: ");

  scanf("%d",& b);
 
  printf("\nBefore swapping: a = %d ,b = %d ", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("\nAfter swapping: a =%d ,b = %d", a,b);

  return 0;
}

