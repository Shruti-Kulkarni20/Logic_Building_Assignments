///////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA1.c
// Description: program which accept number from user and display its digits in reverse order.
// Input      : 2395
// Output     : 5
//              9
//              3
//              2
// Input      : -1018
// Output     : 8
//              1
//              0
//              1
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10  ;
        printf("%d",iDigit);
        iNo = iNo / 10;
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}