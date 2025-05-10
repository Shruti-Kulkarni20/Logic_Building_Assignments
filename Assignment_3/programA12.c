///////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA12.c
// Description: program which accept number from user & print even factors of that number.
// Input      : 24 
// Output     : 1  2  4  6  8  12
// Author     : Shruti S Kulkarni
// Date       : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

   for (i= 1; i <=(iNo/2); i++)
    {
        if ((iNo%i)==0)
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
    DisplayFactor(iValue);
    return 0;
}

