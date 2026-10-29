/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 46 Question: 92
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Find the first repeating lowercase alphabet in a string.
 */
#include <stdio.h>

int main()
{
    char str[100];
    int count[26]={0}, i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++)
        count[str[i]-'a']++;

    for(i=0; str[i]!='\0'; i++)
    {
        if(count[str[i]-'a'] > 1)
        {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}
