/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 45 Question: 89
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Count frequency of a given character in a string.
 */
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count=0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character: ");
    scanf("%c", &ch);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == ch)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}
