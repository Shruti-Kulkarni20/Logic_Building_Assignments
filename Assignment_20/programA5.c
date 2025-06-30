//Accept N numbers from user and return product of all odd elements.
//Input : N : 6
//        Elements : 15 66 3 70 10 88
//Output : 45
//Input: N : 6
//       Elements : 44 66 72 10 88

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0,iProduct = 1;
    int bOdd = 0;
    if (iLength <= 0 || Arr == NULL)
    {
        return -1;
    }
    
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
       if (Arr[iCnt] % 2 != 0)
       {
        iProduct =  iProduct * Arr[iCnt]; 
        bOdd = 1;
       }      
    }
    if (bOdd == 0)
    {
        return 0;
    }
    
    return iProduct;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate  memory");
        return-1;
    }

    printf("Enter %d elements ",iSize);
    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the elements : %d\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Product(p,iSize);
    printf("Product is %d",iRet);
    free(p);

    return 0;
}