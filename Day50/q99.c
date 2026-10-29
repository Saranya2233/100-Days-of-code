/* 
 * Name : Saranya
 * Roll : 590041598
 * Day : 50 Question: 99
 * Date : 29-10-2026
 * 
 * PROBLEM STATEMENT:Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */
#include <stdio.h>

int main()
{
    int d, m, y;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("%02d-Apr-%d", d, y);

    return 0;
}
