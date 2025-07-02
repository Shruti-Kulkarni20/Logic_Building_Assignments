/* Write a program which displays ASCII table. Table contains symbol, Decimal,hexadecimal and
Octal representation of every member from 0 to 255.*/

#include<stdio.h>

void DisplayASCII()
{
    int iCnt;

    printf("Char\tDecimal\tHex\tOctal\n");
    printf("-------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt >= 32 && iCnt <= 126)  // printable char
        {
            printf("  %c\t  %3d\t%02X\t%03o\n", iCnt, iCnt, iCnt, iCnt);
        }
        else  // non-printable char
        {
            printf("  -\t  %3d\t%02X\t%03o\n", iCnt, iCnt, iCnt);
        }
    }

}
int main()
{
    DisplayASCII();

    return 0;
}