//Write application which accept file name from user and display size of file.
//Input : Demo.txt
//Output: File size is 56 bytes

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iSum = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File is succesfully opened with fd : %d\n",fd);

        while ((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            iSum = iSum + iRet;
        }
        printf("File size is : %d bytes\n",iSum);

        close(fd);
    }

    return 0;
}