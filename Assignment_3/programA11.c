//////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA11.c
// Description: program which Accept one number from user & print that number of even
//              numbers on screen.
// Input      : 7
// Output     : 2 4 6 8 10 12 14
// Author     : Shruti S Kulkarni
// Date       : 10/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    int iCount = 0;
    int iNum = 2;

    while(iCount < iNo)
    {
        printf("%d ", iNum);
        iNum  += 2;     
        iCount++;        
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d ", &iValue);
    PrintEven(iValue);
    
    return 0;
}