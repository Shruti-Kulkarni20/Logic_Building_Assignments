///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA2.c
// Description: program which accept number of rows and colums from user and display below pattern.
// Input      : iRow = 4   iCol = 5
// Output     : 2 4 6 8 10
//              1 3 5 7 9
//              2 4 6 8 10
//              1 3 5 7 9
// Author     : Shruti S Kulkarni
// Date       : 21/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
 int i = 0,j =0;
 int iCnt1 = 0, iCnt2 = 0;

 for(i = 1;i<= iRow;i++)
 {
    for(j=1;j<=iCol;j++)
    {
      if((i % 2) != 0)
       {
        iCnt1 = 2 * j;
        printf("%d\t",iCnt1);
       }
       else
       {
        iCnt2 = (2 * j) - 1;
        printf("%d\t",iCnt2);
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