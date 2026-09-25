/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 27 Question: 54
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main()
{
    int i, j, spaces, stars;

    // Upper half
    for (i = 1; i <= 4; i++)
    {
        spaces = 4 - i;
        stars = 2 * i - 1;

        for (j = 1; j <= spaces; j++)
            printf(" ");

        for (j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--)
    {
        spaces = 4 - i;
        stars = 2 * i - 1;

        for (j = 1; j <= spaces; j++)
            printf(" ");

        for (j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }
   return 0;
}
