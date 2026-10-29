/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 43 Question: 85
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Reverse a string.
 */
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0' && str[i]!='\n'; i++);

    for(j=0, i=i-1; j<i; j++, i--)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }

    printf("Reversed string: %s", str);

    return 0;
}
