///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA3.c
// Description: program which accept number from user and display below pattern.
// Input      : 5
// Output     : 1 * 2 * 3 * 4 * 5 *
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
 int iCnt = 0;
 for(iCnt = 1; iCnt <= iNo; iCnt++)
 {
    printf("%d  *\t",iCnt);
 }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}