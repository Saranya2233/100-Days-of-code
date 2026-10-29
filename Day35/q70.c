/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 35 Question: 70
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Rotate an array to the right by k positions.
 */
#include <stdio.h>

int main()
{
    int a[50], n, k, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for(j=0; j<k; j++)
    {
        temp = a[n-1];

        for(i=n-1; i>0; i--)
            a[i] = a[i-1];

        a[0] = temp;
    }

    printf("Rotated array: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}
