#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo){
    double sMeter=0.0;
    sMeter=iNo*0.0929;
    return sMeter;
}

int main(){
    int iValue=0;
    double dRet=0;

    printf("Enter area in square feet:\n");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("Area in square meters is %lf",dRet);
    return EXIT_SUCCESS;
}