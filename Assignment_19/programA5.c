//Accept N number from user and accept one another number as NO,return frequency of NO from it.
//Input : N : 6
//        No: 66
//        Element : 85 66 3 66 93 88
//Output : 2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength, int iNo)
{
    int iCnt = 0,iCount = 0;
    if((iLength <= 0)&&(Arr == NULL))
    {
        return -1;
    }
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0,iValue = 0;
    int *p = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize* sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return-1;
    }
    printf("Enter %d elements :",iSize);
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p,iSize,iValue);
    printf("%d",iRet);
    free(p);

    return 0;
}