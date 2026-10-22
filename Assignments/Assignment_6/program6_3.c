#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount){
    float fDiscount=0.0f;
    float fFinalAmount=0.0f;

    if(fAmount<0){
        printf("Invalid");
        return;
    }
    if(fAmount<1000){
        printf("Payable amount:%.2f",fAmount);
    }
    else if(fAmount<5000){
        fDiscount=(fAmount*10)/100;
        fFinalAmount=fAmount-fDiscount;
        printf("Payable amount:%.2f",fFinalAmount);
    }
    else{
        fDiscount=(fAmount*20)/100;
        fFinalAmount=fAmount-fDiscount;
        printf("Payable amount:%.2f",fFinalAmount);
    }
}

int main(){
    float fAmount=0.0f;

    printf("Enter purchase amount:\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);
    return EXIT_SUCCESS;
}