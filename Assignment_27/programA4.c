//Write a program which accept string from user and copy small character of that string into another string.
//Input : "Marvellous multi OS"
//output : "arvellous multi"

#include<stdio.h>

void StrCpySmall(char *str,char *dest)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
           *dest = *str;
           dest++;
        }
        str++;
    }   
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous multi OS";
    char brr[30];

    StrCpySmall(arr,brr);
    printf("%s",brr);

    return 0;
}