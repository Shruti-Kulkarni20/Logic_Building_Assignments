//Write a program which accept string from user and copy the contents of that string into another string.
//Input : "Marvellous Multi OS"
//Output : "marvellous Multi OS"  in another str

#include<stdio.h>
#include<string.h>

void StrCpyX(char *str,char *dest)
{
    while (*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest = '\0';
    printf("Copied string : %s",dest);
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] ;

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}