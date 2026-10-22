#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits){
    float fBill=0.0f;
    if(iUnits<0){
        printf("Invalid");
        return;
    }
    if(iUnits<=100){
        fBill=5.0f*iUnits;
    }
    else if(iUnits<=200){
        fBill=500.0f+(7*(iUnits-100));
    }
    else{
        fBill=1200.0f+(10*(iUnits-200));
    }
    printf("Bill = %.2f ",fBill);
}

int main(){
    int iUnits=0;

    printf("Enter consumed units :\n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);
    return EXIT_SUCCESS;
}