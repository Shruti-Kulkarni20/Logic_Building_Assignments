///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA1.c
// Description: program which accept number of rows and colums from user and display below pattern.
// Input      : iRow = 3    iCol = 5
// Output     : A A A A A
//              B B B B B
//              C C C C C
// Author     : Shruti S Kulkarni
// Date       : 21/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
 int i = 0, j = 0;
 char Ch = '\0';
 for ( i = 1,Ch = 'A'; i <= iRow; i++,Ch++)
 {
    for ( j = 1; j <= iCol; j++)
    { 
       
        printf("%c\t",Ch);
       
    }
    printf("\n");
 }

}
int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}