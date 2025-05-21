/////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: program which accept number from 
//              user and display its table in reverse order.
// Input      : 2
// Output     : 20 18 16 14 12 10 8 6 4 2   
// Input      : 5
// Output     : 50 45 40 35 30 25 20 15 10 5
// Input      : -5
// Output     : 50 45 40 35 30 25 20 15 10 5
// Author     : Shruti S Kulkarni
// Date       : 18/05/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
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
 for(iCnt = 10;iCnt >= 1; iCnt--)
 {
    iTble = iNo * iCnt;
    printf("%d \t",iTble);
 }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}