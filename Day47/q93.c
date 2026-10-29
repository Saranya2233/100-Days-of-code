/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 47 Question: 93
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Check if two strings are anagrams of each other.
 */
#include <stdio.h>

int main()
{
    char a[100], b[100];
    int count[26]={0}, i;

    printf("Enter two strings: ");
    scanf("%s%s", a, b);

    for(i=0; a[i]!='\0'; i++)
        count[a[i]-'a']++;

    for(i=0; b[i]!='\0'; i++)
        count[b[i]-'a']--;

    for(i=0; i<26; i++)
    {
        if(count[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
