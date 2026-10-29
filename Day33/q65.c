/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 33 Question: 65
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Search in a sorted array using binary search.
 */
#include <stdio.h>

int main()
{
    int a[50], n, x, i, low, high, mid;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    low = 0;
    high = n-1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            printf("Element found at position %d", mid+1);
            return 0;
        }
        else if(x > a[mid])
            low = mid+1;
        else
            high = mid-1;
    }

    printf("Element not found");

    return 0;
}
