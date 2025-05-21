///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA1.c
// Description: program which accept number from user and return count of even digits.
// Input      : 2395
// Output     : 1
// Input      : 1018
// Output     : 2
// Input      : -1018
// Output     : 2
// Input      : 8462
// Output     : 4
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %  2)==0)
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

    bRet = CountEven(iValue);
    printf("%d",bRet);

    return 0;
}