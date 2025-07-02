//Write a program which accept string from user and display it in reverse order.
//Input : "MarvellouS"
//Output : "SuollevraM"

#include<stdio.h>

void Reverse(char*str)
{
    int iCount = 0,iCnt = 0;
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);    
    return 0;
}