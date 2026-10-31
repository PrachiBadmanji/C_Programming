#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth,float fHeight){
    double area=0;
    area=fWidth*fHeight;
    return area;
}

int main(){

    float fValue1=0.0f,fValue2=0.0f;
    double dRet=0.0;

    printf("Enter the width:\n");
    scanf("%f",&fValue1);

    printf("Enter the height:\n");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of rectangle is %.3f",dRet);
    return EXIT_SUCCESS;
}