///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA2.c
// Description: program which accept number of rows and colums from user and display below pattern.
// Input      : iRow = 4    iCol = 4
// Output     : A B C D
//              a b c d
//              A B C D
//              a b c d
// Author     : Shruti S Kulkarni
// Date       : 21/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
 int i = 0, j = 0;
 char Ch1 = '\0', Ch2 = '\0';
 for ( i = 1; i <= iRow; i++)
 {
    for ( j = 1,Ch1 = 'A',Ch2 ='a'; j <= iCol; j++,Ch1++,Ch2++)
    { 
       if ((i % 2)==0)
       {
        printf("%c\t",Ch2);
       }
       else
       {
        printf("%c\t",Ch1);
       }
       
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