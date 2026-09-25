/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 23 Question: 45
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 */
#include <stdio.h>

int main()
{
    int n, i, numerator, denominator;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        numerator = 2 * i;
        denominator = 4 * i - 1;

        sum = sum + (float)numerator / denominator;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}
