/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 48 Question: 95
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Check if one string is a rotation of another.
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], temp[200];

    printf("Enter two strings: ");
    scanf("%s%s", a, b);

    if(strlen(a) != strlen(b))
    {
        printf("Not Rotation");
        return 0;
    }

    strcpy(temp, a);
    strcat(temp, a);

    if(strstr(temp, b))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
