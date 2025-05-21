///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA1.c
// Description: program which accept number from user and display below pattern.
// Input      : 5
// Output     : A  B  C  D  E
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
 int iCnt = 0;
 char Ch = 'A';
 for(iCnt = 1,Ch = 'A'; iCnt <= iNo; iCnt++,Ch++)
 {
    printf(" %c\t",Ch);
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