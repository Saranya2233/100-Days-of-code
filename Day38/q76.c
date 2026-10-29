/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 38 Question: 76
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Check if a matrix is symmetric.
 */
#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, flag=1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(a[i][j] != a[j][i])
                flag=0;

    if(flag)
        printf("Symmetric matrix");
    else
        printf("Not symmetric");

    return 0;
}
