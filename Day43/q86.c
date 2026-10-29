/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 43 Question: 86
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Check if a string is a palindrome.
 */
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag=1;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(j=0; str[j]!='\0' && str[j]!='\n'; j++);

    for(i=0, j=j-1; i<j; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
