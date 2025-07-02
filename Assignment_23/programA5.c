//Accept character from user and display its ASCII value in decimal,octal and hexadecimal format.
//Input : A
//Output: Decimal  65
//      : Octal    0101
//      : hexadecimal 0X41

#include<stdio.h>

void Display(char ch)
{
    printf("Char\tDecimal\tOctal\tHexa\n");
    if (((ch >= 'A') && (ch <='Z'))||((ch >= 'a')&&(ch <= 'z')))
    {  
       printf("  %c\t  %3d\t%02X\t%03o\n",ch,ch,ch,ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}