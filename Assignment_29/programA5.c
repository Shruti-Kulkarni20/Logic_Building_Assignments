//Write a program which accepts file name and one count from user and read that number of characters from starting position.
//Input : Demo.txt      12
//Output: Display first 12 characters from starting position.

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

void DisplayN(char FName[],int iSize)
{
    int fd =  0,iRet = 0,iCnt = 0,iCount = 0;
    char Buffer[10] = {'\0'};

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
       printf("Unable to open file\n");
       return;
    }
    else
    {
        while ((iRet = read(fd,Buffer,10))!= 0)
        {
            for(iCnt = 0;iCnt < iRet && iCount < iSize;iCnt++)
            {
                printf(" %c",Buffer[iCnt]);
                iCount++;
            }
            
        }
        
    }
    close(fd);

}
int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the file name : \n");
    scanf("%s",FileName);

    printf("Enter the number of size : \n");
    scanf(" %d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}