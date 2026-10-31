#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp){
    double celsius=0.0;
    celsius=((fTemp-32)*(5.0f/9.0f));  //if written (5/9) integer division takes place which returns 0
    return celsius;
}

int main(){

    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Temperature in celsius is %f",dRet);
    return EXIT_SUCCESS;
}