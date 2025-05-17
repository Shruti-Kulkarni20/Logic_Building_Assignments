/////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: program which accept number from user
//              and print first 5 multiple of n.
// Input      : 4
// Output     : 4 8 12 16 20
// Author     : Shruti S Kulkarni
// Date       : 17/05/2025
//
/////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
 int iCnt = 0 ;
 if (iNo < 0)
 {
    iNo = -iNo;
 }
 for ( iCnt = 1; iCnt <= 5 ; iCnt++)
 {
    printf("%d\t",iNo*iCnt);
 }
 
 
}
int main()
{
    int iValue = 0;
    printf("enter number : ");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}