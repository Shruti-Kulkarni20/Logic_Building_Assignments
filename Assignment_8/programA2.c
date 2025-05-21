//////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA2.c
// Description: program which accept width and height of rectangle from user 
//              and calculate its area.(Area=width*height)
// Input      : 5.3  9.78
// Output     : 51.834
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    float fArea = 0.0;
    fArea = fWidth * fHeight;
    return fArea;
}
int main()
{

    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of Rectangle is : %0.3f",dRet);

    return 0;
}