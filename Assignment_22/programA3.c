//Accept Character from user and check whether it is digit or not (9-0)
//Input : 7
//Output: TRUE
//Input : d
//Output: FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if (bRet == TRUE)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    
    return 0;
}