//Write application which accept file name from user and open that file in read mode.
//Input : Demo.txt
//Output : File opened successfully

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File is succesfully opened with FD %d\n",fd);

    close(fd);
     
    return 0;
}