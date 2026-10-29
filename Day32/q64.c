/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 32 Question: 64
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Find the digit that occurs the most times in an integer number.
 */
#include <stdio.h>

int main()
{
    int n, d, i, max = 0, digit = 0, count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        d = n % 10;
        count[d]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            digit = i;
        }
    }

    printf("Most occurring digit = %d", digit);

    return 0;
}
