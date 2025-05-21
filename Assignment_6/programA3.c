/////////////////////////////////////////////////
// 
// File name  : programA2.c
// Description: program to find factorial of given number
// Input      : 5
// Output     : 120 (5*4*3*2*1)
// Input      : -5
// Output     : 120 (5*4*3*2*1)
// Input      : 4
// Output     : 24  (4*3*2*1)
// Author     : Shruti S Kulkarni
// Date       : 18/05/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int icnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt =1;icnt <= iNo;icnt++)
    {
        iFact = iFact*icnt;
    }
    return iFact;

}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of numbermis %d", iRet);

    return 0;
}
