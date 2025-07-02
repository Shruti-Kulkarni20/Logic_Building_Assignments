/*Accept division of students from user and depends on the division display exam timing
There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C 
at 10.30 AM.(Application should be case insensitive).

Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if ((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Exam of division A at 7 AM");
    }
    else if (((chDiv == 'B') || (chDiv == 'b')))
    {
         printf("Exam of division B at 8 AM");
    }
    else if (((chDiv == 'C') || (chDiv == 'c')))
    {
         printf("Exam of division C at 9.20 AM");
    }
    else if (((chDiv == 'D') || (chDiv == 'd')))
    {
         printf("Exam of division D at 10:30 AM");
    }
    else
    {
        printf("Invalid Division");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
