///////////////////////////////////////////////////////////////////////////////////////////
// 
// File name  : programA4.c
// Description: program which accept temperature in Fahrenheit and convert it into celsius.
//              (1 celsius = (Fahrenheit - 32)*(5/9))
// Input      : 10
// Output     : -12.2222 (10 -32)*(5/9)
// Input      : 34
// Output     : 1.11111  (34 - 32)* (5/9)
// Author     : Shruti S Kulkarni
// Date       : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
  
  float fCel = 0.0;
  fCel = (fTemp - 32) *(5.0 / 9.0);
  return fCel;
}
int main()
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius : %0.4f",dRet);

    return 0;
}