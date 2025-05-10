///////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA15.c
// Description: program to accept one character from user and check wheather that character
//               is vowel (a,e,i,o,u) or not.
// Input      : E
// Output     : TRUE
// Input      : d
// Output     : FALSE
// Author     : Shruti S Kulkarni
// Date       : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL ;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue=='A'||cValue =='E'||cValue=='I'||cValue=='O'||cValue=='U'||cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue =='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char ChValue = '\0';
    BOOL bRet = FALSE ;

    printf("Enter character\n");

    scanf(" %c", &ChValue);

    bRet = ChkVowel(ChValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0 ;
}