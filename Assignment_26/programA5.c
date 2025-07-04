//Write a program which accept string from user reverse that string in place.
//Input : "abcd"
//output: "dcba"
//Input : "abba"
//Ouput : "abba"

#include<stdio.h>

void StrRevX(char *str)
{
    int iCnt = 0,iCount = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;
    for ( iCnt = iCount; iCnt > 0; iCnt--,str--)
    {
        printf("%c",*str);
    }
    printf("\n");
}
int main()
{
    char arr[20];
    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    StrRevX(arr);

    return 0;
}