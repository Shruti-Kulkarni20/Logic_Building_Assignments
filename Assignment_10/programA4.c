///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA4.c
// Description: program which accept number from user and return multiplicationof all digits. 
// Input      : 2395
// Output     : 270
// Input      : 1018
// Output     : 8
// Input      : 9440
// Output     : 144
// Input      : 922432
// Output     : 864
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iMulti = iMulti * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMulti;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}