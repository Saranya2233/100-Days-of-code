/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 47 Question: 94
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Find the longest word in a sentence.
 */
#include <stdio.h>

int main()
{
    char s[100], word[50];
    int i, len=0, max=0, start=0, j;

    printf("Enter sentence: ");
    fgets(s, sizeof(s), stdin);

    for(i=0; ; i++)
    {
        if(s[i]!=' ' && s[i]!='\n' && s[i]!='\0')
            len++;
        else
        {
            if(len > max)
            {
                max = len;
                start = i-len;
            }
            len=0;

            if(s[i]=='\0' || s[i]=='\n')
                break;
        }
    }

    for(j=0; j<max; j++)
        word[j] = s[start+j];

    word[j]='\0';

    printf("Longest word = %s", word);

    return 0;
}
