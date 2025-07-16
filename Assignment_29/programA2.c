//Write a program which accept file name from user and count number of small characters from that file.
//Input : Demo.txt
//Output :Number of small characters are 21

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int CountSmall(char FName[])
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
                if (Buffer[iCnt] >= 'a' && Buffer[iCnt] <= 'z')
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

    printf("Enter the file name you want to open : \n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small characters are %d",iRet);

    return 0;
}