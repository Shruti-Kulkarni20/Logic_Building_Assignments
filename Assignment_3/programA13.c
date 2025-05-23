///////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA13.c
// Description: program which accept number from user & print even factors of that number.
// Input      : 36
// Output     : 2  6  12  18
// Author     : Shruti S Kulkarni
// Date       : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i=1;i<= (iNo/2) ;i++)
    {
        if(i%2==0 && iNo%i==0)
        {
             printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d ",&iValue);
    DisplayEvenFactors(iValue);

    return 0;
}

