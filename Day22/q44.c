/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 22 Question: 44
 * Date : 25-09-2026
 * 
 * PROBLEM STATEMENT: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
 */
#include <stdio.h>

int main()
{
    int n, i, numerator, denominator;
    float sum = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        numerator = 2 * i - 1;
        denominator = 2 * i;
        sum = sum + (float)numerator / denominator;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}
