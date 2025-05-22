///////////////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA5.c
// Description: program which accept number of rows and colums from user and display below pattern.
// Input      : iRow = 5   iCol = 5
// Output     : 1 2 3 4 5
//              1 2     5
//              1   3   5
//              1     4 5
//              1 2 3 4 5
// Author     : Shruti S Kulkarni
// Date       : 22/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
  int i = 0, j = 0;
  if (iRow != iCol)
  {
    printf("Invalid Output");
  }
  
  for(i = 1; i <= iRow; i++)
  {
    for(j = 1;j <= iCol; j++)
    {
        if((i == j)||(i == 1)||(i == iRow)||(j == 1)||(j == iCol))
        {
          printf("%d\t",j);
        }
        else
        {
            printf(" \t");
        }
    }
    printf("\n");
  }

}
int main()
{

    int iValue1 = 0 , iValue2 = 0;

    printf("enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}