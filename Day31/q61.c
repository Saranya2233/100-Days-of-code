/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 31 Question: 61
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Search for an element in an array using linear search.
 */
#include <stdio.h>

int main()
{
    int n, i, search, found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
