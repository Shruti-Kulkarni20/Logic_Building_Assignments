//Write a program which accept string from user and accept one character.Return index of last occurrence of that character.
//Input : "Marvellous Multi OS"
//         M
//Output : 11
//input : "Marvellous Multi OS"
//        W
//output :-1
//Input : "Marvellous Multi OS"
//         e
//Output : 4

#include<stdio.h>

int Lastchar(char *str,char ch)
{
    int iCnt = 0,iCount = 0;
    while (*str != '\0')
    {
        iCount++;
        str++;
    }
    iCount--;
    str--;
    for ( iCnt = iCount; iCnt > 0; iCnt--,str--)
    {
        if (*str == ch)
        {
            return iCnt;
        }    
    }
    return -1;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    printf("Enter the character");
    scanf(" %c",&cValue);

    iRet = Lastchar(arr,cValue);

    printf("Character location is %d ",iRet);
    return 0;
}