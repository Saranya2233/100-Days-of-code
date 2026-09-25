/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 25 Question: 50
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT: Write a program to print the following pattern:
 *****
  ****
   ***
    **
     *
*/
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        // Print spaces
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (j = i; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
