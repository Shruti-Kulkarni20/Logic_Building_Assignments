//////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: program which accept number from user and return summation of even digits and 
//              summation of odd digits. 
// Input      : 2395
// Output     : -15   (2 - 17)
// Input      : 1018
// Output     : 6     (8 - 2)
// Input      : 8440
// Output     : 16    (16 - 0)
// Input      : 5733
// Output     : -18   (0 - 18) 
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iDiff = 0;
    int iSum1 = 0, iSum2 = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iSum1 -iSum2;
    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}