// Accept N numbers from user and display all such elements which are multiple of 11
//Input : N : 6
//        Element: 85 66 3 55 93 88
//Output : 66 55 88

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 11)== 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p== NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements :",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("enter elements : %d \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);
    free(p);
    return 0;
}
