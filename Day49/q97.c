/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 49 Question: 97
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Print the initials of a name.
 */
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: %c", name[0]);

    for(i=1; name[i]!='\0'; i++)
    {
        if(name[i-1]==' ' && name[i]!=' ')
            printf("%c", name[i]);
    }

    return 0;
}
