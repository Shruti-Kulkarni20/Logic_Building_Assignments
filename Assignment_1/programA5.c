//////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: Accept one number from user & print that number of * on screen.
// Author     : Shruti S Kulkarni
// Date       :08/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for( iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" * ");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}