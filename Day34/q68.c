/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 34 Question: 68
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Delete an element from an array.
 */
#include <stdio.h>

int main()
{
    int a[50], n, pos, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i=pos-1; i<n-1; i++)
        a[i] = a[i+1];

    n--;

    printf("New array: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
