///////////////////////////////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: program which returns difference between Even factorial
//              and odd factorial of given number.
// Input      : 5
// Output     : -7 (8-15)
// Input      : -5
// Output     : -7 (8-15)
// Input      : 10
// Output     : 2895 (3840-945)
// Author     : Shruti S Kulkarni
// Date       : 19/05/2025
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact1 = 1, iFact2 = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo;iCnt >=1;iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    return (iFact1 - iFact2);
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}