//////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA9.c
// Description: Accept two number from user & display first number 
//              in second number of time.
// Input      : 12  5
// Output     : 12 12 12 12 12
// Input      : -2 3
// Output     : -2 -2 -2
// Input      : -2 0
// Output     :        
// Author     : Shruti S Kulkarni
// Date       : 09/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int i = 0;

    for(i = 0;i < iFrequency;i++ )
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue );

    printf("Enter Frequency : ");
    scanf(" %d",&iCount );

    Display( iValue , iCount);

    return 0;
}