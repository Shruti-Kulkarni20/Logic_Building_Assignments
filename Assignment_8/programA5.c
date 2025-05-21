//////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: program which accept area in square feet and convert it into square meter.
//              (1 square feet = 0.0929 Square meter)
// Input      : 5
// Output     : 0.464515 
// Input      : 7
// Output     : 0.650321
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqMeter = 0;
    dSqMeter = iValue * 0.0929;
    return dSqMeter;
}
int main()
{
    int iValue = 0;
    double iRet = 0;

    printf("Enter Area in square feet : ");
    scanf("%d",&iValue);

    iRet = SquareMeter(iValue);

    printf("Distance in  square Meter is : %lf ",iRet);

    return 0;
}