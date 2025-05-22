///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA3.c
// Description: program which accept number of rows and colums from user and display below pattern.
// Input      : iRow = 5    iCol = 5
// Output     : a b c d e 
//              1 2 3 4 5
//              a b c d e
//              1 2 3 4 5 
//              a b c d e
// Author     : Shruti S Kulkarni
// Date       : 21/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
 int i = 0,j =0;
 int iCnt = 0;
 char Ch = 'a';

 for(i = 1;i<= iRow;i++)
 {
    for(j=1,Ch='a';j<=iCol;j++,Ch++)
    {
      if((i % 2) != 0)
       {
        printf("%c\t",Ch);
       }
       else
       {
        printf("%d\t",j);
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
