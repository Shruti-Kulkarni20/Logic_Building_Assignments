//Write application which accept file name from user and one string from user.Write that string at the end of file.
//Input : Demo.txt
//        Hello World
//output : Write hello World at the end of Demo.txt file

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0,iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_WRONLY | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opend with fd : %d\n",fd);

        while ((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',BUFFER_SIZE);
        }
        close(fd);
    }

    return 0;
}