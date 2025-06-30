//Accept N numbers from user and accept Range , Display all elements from that range.
//Input : N : 6
//        start : 60
//        End : 90
//        Elements : 85 66 3 76 93 88
//Output : 66 76 88
//Input : N : 6
//        start : 30
//        End : 50
//        Elements : 85 66 3 76 93 88
//Output : 

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    if (Arr == NULL || iLength <= 0)
    {
        return;
    }
    
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("The Number Between starting and ending points are : %d\n",Arr[iCnt]);
        }
        else
        {
            printf("There is not any number in between");
        }
    }

}

int main()
{
    int iSize = 0,iValue1 = 0,iValue2 = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize *sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter elements : %d \t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iValue1,iValue2);
    

    free(p);  
    return 0;
}
