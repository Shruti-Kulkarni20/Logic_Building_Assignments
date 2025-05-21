/////////////////////////////////////////////////
// 
// File name  : programA4.c
// Description: program which accept number from 
//              user and display its table.
// Input      : 2
// Output     : 2 4 6 8 10 12 14 16 18 20  
// Input      : 5
// Output     : 5 10 15 20 25 30 35 40 45 50
// Input      : -5
// Output     : 5 10 15 20 25 30 35 40 45 50
// Author     : Shruti S Kulkarni
// Date       : 18/05/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
  int iCnt = 0;
  int iTble = 0;
  
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  if (iNo == 0)
  {
      printf("please enter non zero number.\n");
      return;
  }
  for(iCnt = 1;iCnt <= 10;iCnt++)
  {
      iTble = iNo*iCnt;
      printf("%d \t",iTble);
  }
}

int main()
{

    int iValue =  0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}