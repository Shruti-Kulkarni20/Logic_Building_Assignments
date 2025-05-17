/////////////////////////////////////////////////
// 
// File name  : programA3.c
// Description: program which accept number from user
//              and prints its numbers line.
// Input      : 4
// Output     : -4 -3 -2 -1 0 1 2 3 4 
// Author     : Shruti S Kulkarni
// Date       : 17/05/2025
//
///////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = -iNo ; iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0 ;
}
