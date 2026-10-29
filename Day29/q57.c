/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 29 Question: 57
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT: Find the sum of array elements.
 */
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
