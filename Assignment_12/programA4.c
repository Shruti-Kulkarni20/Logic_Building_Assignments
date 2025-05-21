///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA4.c
// Description: program which accept number of rows and colums from user and display below pattern.
// Input      : iRow = 3     iCol = 4
// Output     : *  #  *   #
//              *  #  *   #
//              *  #  *   #
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
 int i = 0, j = 0;
 for ( i = 1; i <= iRow; i++)
 {
    for ( j = 1; j <= iCol; j++)
    { 
       if ((j % 2) != 0)
       {
        printf("*\t");
       }
       else
       {
        printf("#\t");
       }
       
    }
    printf("\n");
 }
 
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}