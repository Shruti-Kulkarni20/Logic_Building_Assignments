//Write a program which accept string from user and copy the contents of that string into another string.
//Input : "Marvellous Multi OS"
//         10
//Output : "Marvellous
//If third parameter is greatre than te size of source string then copy whole string into destination.

#include<stdio.h>

void StrNCpyX(char *str,char *dest,int iCnt)
{
  while((*str != '\0') && (iCnt != 0))
  {
    *dest = *str;
    str++;
    dest++;
    iCnt--;
  }
  *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] ;
    StrNCpyX(arr,brr,10);
    printf("%s",brr);

    return 0;
}