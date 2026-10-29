/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 33 Question: 66
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Insert an element in a sorted array at the appropriate position.
 */
#include <stdio.h>

int main()
{
    int a[50], n, x, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &x);

    for(i=n-1; i>=0 && a[i]>x; i--)
        a[i+1] = a[i];

    a[i+1] = x;
    n++;

    printf("Array after insertion: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
