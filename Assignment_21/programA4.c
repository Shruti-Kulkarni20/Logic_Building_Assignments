//Accept N numbers from user and display all such numbers which contain 3 digits in it 
//Input : N : 6
//        Elements :8225 665 3 76 953 858
//Output:665 953 858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
   int iCount = 0,iCnt = 0, temp =0 ;

    if ((Arr == NULL) || (iLength <= 0))
    {
        return -1;
    }
   
   for ( iCnt = 0; iCnt < iLength; iCnt++)
   {
       temp = Arr[iCnt];
       iCount = 0;

       while (temp != 0)
       {
        temp = temp/10;
        iCount++;
       }
       if (iCount == 3)
       {
         printf("%d\t",Arr[iCnt]);
       } 
   }
   printf("\n");  
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

    Digits(p,iSize);

    free(p);

    return 0;
}