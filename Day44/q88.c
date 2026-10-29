/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 44 Question: 88
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Replace spaces with hyphens in a string.
 */
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
            str[i]='-';
    }

    printf("New string: %s", str);

    return 0;
}
