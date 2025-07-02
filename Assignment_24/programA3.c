//write a program which accept string from user and return difference between frequency of
//small characters and frequency of capital characters.
//Input : "MarvellouS"
//Output : 6 (8 -2)

#include<stdio.h>

int Difference(char *str)
{
    int iCount1 = 0,iCount2 = 0;
    
    while(*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCount1++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            iCount2++;
        }
        str++;
    }
    return iCount2 - iCount1 ;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}