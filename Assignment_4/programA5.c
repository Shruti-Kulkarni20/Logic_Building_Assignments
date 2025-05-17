//////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: program which accept number from user
//              and difference between summation of all
//              its factors and non factors.
// Input      : 12
// Output     : -34   (16-50)
// 
// Input      : 10
// Output     : -29   (8 - 37)
// Author     : Shruti S Kulkarni
// Date       : 16/05/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt = 0 , iSum1 = 0 , iSum2 = 0;
   
   for (iCnt = 1; iCnt <= iNo ; iCnt++)
   {
    if((iNo % iCnt) == 0)
    {
        iSum1 = iSum1 + iCnt;
    }
    else
    {
        iSum2 = iSum2 + iCnt;
    }
   }
   return iSum1 - iSum2;
}
int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}