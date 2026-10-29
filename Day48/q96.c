/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 48 Question: 96
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Reverse each word in a sentence without changing the word order.
 */
#include <stdio.h>

int main()
{
    char s[100];
    int i, j, end;

    printf("Enter sentence: ");
    fgets(s, sizeof(s), stdin);

    for(i=0; s[i]!='\0'; )
    {
        j=i;

        while(s[j]!=' ' && s[j]!='\n' && s[j]!='\0')
            j++;

        end=j-1;

        while(i<end)
        {
            char temp=s[i];
            s[i]=s[end];
            s[end]=temp;
            i++;
            end--;
        }

        i=j+1;
    }

    printf("Result: %s", s);

    return 0;
}
