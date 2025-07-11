//Write application which accept file name from user and read all data from that file
//and display contents on screen.
//inpuut : demo.txt
//Output : Display all data of file.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0,iRet = 0;
    char Buffer[10] = {'\0'}; 
    char Fname[20] = {'\0'};

    printf("Enter the name of file that you want to read : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opend with fd : %d\n",fd);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s",Buffer);
            memset(Buffer,'\0',10);
        }

        close(fd);
    }
    return 0;
}