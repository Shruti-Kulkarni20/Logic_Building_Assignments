//Write a program which accepts file name from user and count number of white spaces from that file.
//Input : Demo.txt
//Output : Number of white spaces are 13

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int CountWhite(char FName[])
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
                if (Buffer[iCnt] == ' ')
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

    printf("enter the file you want to open : \n");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);

    printf("Number of white spaces are %d",iRet);

    return 0;
}
