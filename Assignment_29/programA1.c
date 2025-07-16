//Write a program which accept file name from user and count number of capital characters from that file.
//Inout : Demo.txt
//Output: Number of capital characters are 23

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int CountCapital(char FName[])
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
                if (Buffer[iCnt] >= 'A' && Buffer[iCnt] <= 'Z')
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

    printf("Enter file name you want to open:\n");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    printf("Number of Capital character are %d ",iRet);

    return 0;
}