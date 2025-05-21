///////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA1.c
// Description: program which accept radius of circle from user 
//              and calculate its area.Consider value of PI as 3.14(Area=PI*Radius*Radius)
// Input      : 5.3
// Output     : 88.2026
// Input      : 10.4
// Output     : 339.6224
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
  float PI = 3.14;
  float fArea = 0.0;
  fArea = PI*fRadius*fRadius;
  return fArea;
}
int main()
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %0.4f",dRet);

    return 0;
}