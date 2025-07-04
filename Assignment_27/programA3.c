//Write a program which accept string from user and  copy capital characters of that string into another string.
//Input : "Marvellous Multi OS"
//Output : "MMOS"

#include<stdio.h>

void StrCpyCap(char *srt,char *dest)
{
    while(*srt != '\0')
    {
        if ((*srt >= 'A') && (*srt <= 'Z'))
        {
            *dest = *srt;
            dest++;
        }   
        srt++;     
    } 
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyCap(arr,brr);
    printf("%s",brr);

    return 0;
}