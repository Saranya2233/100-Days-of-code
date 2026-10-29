/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 45 Question: 90
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Toggle case of each character in a string.
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
        if(str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 32;
    }

    printf("Toggled string: %s", str);

    return 0;
}
