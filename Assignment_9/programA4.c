///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA4.c
// Description: program which accept number from user and count Frequency of  4 in it . 
// Input      : 2395
// Output     : 0
// Input      : 10184
// Output     : 1
// Input      : 9440
// Output     : 2
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ChkFreq(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
          iCnt++;
        }

       iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkFreq(iValue);
    printf("%d",bRet);

    return 0;
}