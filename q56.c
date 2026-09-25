/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 28 Question: 56
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT:Read and print elements of a one-dimensional array.
*/
#include <stdio.h>

int main()
{
    int a[5], i;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements of the array are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
