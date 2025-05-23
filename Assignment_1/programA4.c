//////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA4.c
// Description: Accept the one number and check wheather it is divisible by 5 or not.
// Author     : Shruti S Kulkarni
// Date       : 08/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if(( iNo% 5) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number");
    scanf("%d",& iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}