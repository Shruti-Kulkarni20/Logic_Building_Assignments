//Write a program which 2 strings from user and concat second string after first string.
//Input : "Marvellous Infosystems"
//        "Logic Building"
//Output:"Marvellous Infosystems Logic Building"

#include<stdio.h>

void StrCatX(char *str,char *dest)
{

    while (*str != '\0')
    {
        str++;   
    }
    while (*dest != '\0')
    {
        *str = *dest;
        str++;
        dest++;
        
    }
    *str = '\0';
}
int main()
{
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Logic Building ";

    StrCatX(arr,brr);
    printf("%s",arr);
    
    return 0;
}