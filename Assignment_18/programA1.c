//Accept N numbers from user and return difference between 
//summation of even elements and summation of odd elements.
//Input : N: 6
//        Elements : 85 66 3 80 93 88
//Output : 53(234 - 181)

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt = 0,iSum1 = 0,iSum2 = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }
    return iSum1 - iSum2;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int*ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : ",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);
    printf("Result is %d",iRet);
    free(ptr);
    return 0;
}