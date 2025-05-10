//////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA10.c
// Description: Accept number from user & Check wheather the number is even or odd.
// Author     : Shruti S Kulkarni
// Date       : 09/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
  if(iNo % 2 == 0)
  {
    printf("Number is even\n");
  }
  else
  {
    printf("Number is Odd\n");
  }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue );

    bRet = CheckEven(iValue );
    
    return 0;
}
