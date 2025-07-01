//Accept N number from user and return the difference between largest and smallest number.
// Input : N : 6
//         Elements : 85 66 3 66 93 88
//Output : 90(93-3)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt =0,iMax =0,iMin =0;
    if ((Arr == NULL) || (iLength <= 0))
    {
        return -1;
    }
    iMax = Arr[0];
    iMin = Arr[0];

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMax - iMin;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);


    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements ",iSize);
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference  is %d",iRet);

    free(p);

    return 0;
}