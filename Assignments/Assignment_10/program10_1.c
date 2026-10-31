#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius){
    double area=0;
    area=3.14*fRadius*fRadius;
    return area;
}

int main(){

    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter the radius:\n");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area of circle is %.4f",dRet);
    return EXIT_SUCCESS;
}