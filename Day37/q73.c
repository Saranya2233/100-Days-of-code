/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 37 Question: 73
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Find the sum of each row of a matrix and store it in an array.
 */
#include <stdio.h>

int main()
{
    int a[10][10], sum[10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<r; i++)
    {
        sum[i] = 0;
        for(j=0; j<c; j++)
            sum[i] += a[i][j];
    }

    printf("Row sums: ");
    for(i=0; i<r; i++)
        printf("%d ", sum[i]);

    return 0;
}
