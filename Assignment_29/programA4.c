//Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.
//Input : Demo.txt       'M'
//Output : Frequency of M is 7

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int CountChar(char FName[],char Ch)
{
    int fd =  0, iCount = 0,iRet = 0,iCnt = 0;
    char Buffer[10] = {'\0'};

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        return -1;
    }
    else
    {
        while ((iRet = read(fd,Buffer,10))!= 0)
        {
            for(iCnt = 0;iCnt < iRet;iCnt++)
            {
                if (Buffer[iCnt] == Ch)
                {
                    iCount++;
                }
                
            }
            
        }
        
    }
    close(fd);
    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency is %d",iRet);

    return 0;
}