/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 34 Question: 67
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Insert an element in an array at a given position.
 */
#include <stdio.h>

int main()
{
    int a[50], n, x, pos, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter element and position: ");
    scanf("%d%d", &x, &pos);

    for(i=n; i>=pos; i--)
        a[i] = a[i-1];

    a[pos-1] = x;
    n++;

    printf("New array: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
