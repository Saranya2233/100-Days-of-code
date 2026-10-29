/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 32 Question: 63
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Merge two arrays.
 */
#include <stdio.h>

int main()
{
    int a[50], b[50], c[100], n, m, i;

    printf("Enter sizes: ");
    scanf("%d%d", &n, &m);

    printf("Enter first array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array: ");
    for(i=0; i<m; i++)
        scanf("%d", &b[i]);

    for(i=0; i<n; i++)
        c[i] = a[i];

    for(i=0; i<m; i++)
        c[n+i] = b[i];

    printf("Merged array: ");
    for(i=0; i<n+m; i++)
        printf("%d ", c[i]);

    return 0;
}
