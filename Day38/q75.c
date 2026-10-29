/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 38 Question: 75
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Add two matrices.
 */
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter first matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &b[i][j]);

    printf("Sum:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    return 0;
}
