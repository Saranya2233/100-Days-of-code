/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 50 Question: 100
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Print all sub-strings of a string.
 */
#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k, n=0;

    printf("Enter string: ");
    scanf("%s", s);

    while(s[n]!='\0')
        n++;

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            for(k=i; k<=j; k++)
                printf("%c", s[k]);

            printf("\n");
        }
    }

    return 0;
}
