/////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA3.c
// Description: program which accept distance in kilometer and convert it into meter.
//              (1 kilometer = 1000 Meter)
// Input      : 5
// Output     : 5000
// Input      : 12
// Output     : 12000
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is : %d ",iRet);

    return 0;
}