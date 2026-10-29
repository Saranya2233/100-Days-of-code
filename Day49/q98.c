/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 49 Question: 98
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Print initials of a name with the surname displayed in full.
 */
#include <stdio.h>

int main()
{
    char name[100];
    int i, last=0;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c. ", name[0]);

    for(i=1; name[i]!='\0'; i++)
    {
        if(name[i]==' ')
        {
            last=i+1;

            if(name[i+1]!='\0')
                printf("%c. ", name[i+1]);
        }
    }

    /* Print surname in full */
    printf("\b\b");
    for(i=last; name[i]!='\0' && name[i]!='\n'; i++)
        printf("%c", name[i]);

    return 0;
}
