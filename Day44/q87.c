/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 44 Question: 87
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Count spaces, digits, and special characters in a string.
 */
#include <stdio.h>

int main()
{
    char str[100];
    int i, space=0, digit=0, special=0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0' && str[i]!='\n'; i++)
    {
        if(str[i]==' ')
            space++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else if(!((str[i]>='a' && str[i]<='z') ||
                  (str[i]>='A' && str[i]<='Z')))
            special++;
    }

    printf("Spaces = %d\n", space);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d", special);

    return 0;
}
