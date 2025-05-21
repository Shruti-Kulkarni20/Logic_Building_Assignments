///////////////////////////////////////////////////////////////////////////
// 
// File name  : programA4.c
// Description: program to find odd factorial of given number.
// Input      : 5
// Output     : 15 (5*3*1)
// Input      : -5
// Output     : 15 (5*3*1)
// Input      : 10
// Output     : 945 (9*7*5*3*1)
// Author     : Shruti S Kulkarni
// Date       : 19/05/2025
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo;iCnt >=1;iCnt--)
    {
        if((iCnt % 2) !=0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}