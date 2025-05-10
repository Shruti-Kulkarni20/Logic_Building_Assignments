//////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA8.c
// Description: Accept one number from user if number is less than 10 then print
//              "Hello" otherwisse print "Demo".
// Author     : Shruti S Kulkarni
// Date       : 09/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNO)
{
    if(iNO < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}