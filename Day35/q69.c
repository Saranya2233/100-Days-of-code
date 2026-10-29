/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 35 Question: 69
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Find the second largest element in an array.
 */
#include <stdio.h>

int main()
{
    int a[50], n, i, max, second;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    max = second = -99999;

    for(i=0; i<n; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if(a[i] > second && a[i] != max)
            second = a[i];
    }

    printf("Second largest = %d", second);

    return 0;
}
