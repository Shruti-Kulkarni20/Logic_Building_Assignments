//Write a program which accept string from user and count number of white spaces
//input : "Marcellous"
//Output : 0
//Input : "marvellouS Infosystems"
//Output : 1

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
       if (*str ==' ')
       {
        iCount++;
       }
       str++;
    }
    return iCount;
    printf("\n");
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}