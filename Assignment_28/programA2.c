//Write application which accept file name from user and create that file.
//Input : demo.txt
//Output:file created successfully.
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the file you want to create : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("Unable to create file \n");
        return -1;
    }

    printf("File is succesfully created with FD %d\n",fd);

    close(fd);
    return 0;
}