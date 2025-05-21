////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA3.c
// Description: program which accept number from user and count Frequency of  2 in it . 
// Input      : 2395
// Output     : 1
// Input      : 1018
// Output     : 0
// Input      : 922432
// Output     : 3
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    bRet = CountTwo(iValue);
    printf("%d",bRet);

    return 0;
}