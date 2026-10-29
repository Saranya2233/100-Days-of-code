/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 39 Question: 78
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Find the sum of main diagonal elements for a square matrix.
 */
#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, sum=0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<n; i++)
        sum += a[i][i];

    printf("Sum = %d", sum);

    return 0;
}
