///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: program which accept number from user and count Frequency of such as digits which 
//              are less than 6. 
// Input      : 2395
// Output     : 3
// Input      : 1018
// Output     : 3
// Input      : 96672
// Output     : 1
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
        if(iDigit < 6)
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