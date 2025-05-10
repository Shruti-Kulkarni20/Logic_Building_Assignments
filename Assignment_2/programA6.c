//////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA6.c
// Description: Accept one number from user & print that number of * on screen.
// Author     : Shruti S Kulkarni
// Date       : 09/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    while(iCnt<iNo)
    {
        printf(" * ");

        iCnt++;
    }
}

int main()
{
   int iValue = 0;

   printf("Enter number : ");
   scanf("%d",&iValue);

   Display(iValue);

   return 0;
}