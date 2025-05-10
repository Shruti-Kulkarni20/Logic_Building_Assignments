///////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA14.c
// Description: program to accept one character from user and convert case of that character.
// Input      : a
// Output     : A
// Input      : D
// Output     : d
// Author     : Shruti S Kulkarni
// Date       : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char CValue)
{ 
    //if(CValue>=97 && CValue<=122)
    if(CValue>='a'&& CValue<='z')
    {
        CValue=CValue-32;                                //difference between them is 32.i.e a=97 and A=65(32)
        printf("%c",CValue);
    }
    else if(CValue>='A'&& CValue<='Z')
    {
        CValue=CValue+32;
        printf("%c",CValue);
    }
}

int main()
{
    char cValue='\0';
    printf("Enter character \n");
    scanf("%c",&cValue);
    DisplayConvert(cValue); 
    return 0;
}