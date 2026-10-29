/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 41 Question: 82
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Print each character of a string on a new line
 */
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0' && str[i]!='\n'; i++)
        printf("%c\n", str[i]);

    return 0;
}
