#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo){
    int Mts=0;
    Mts=iNo*1000;
    return Mts;
}

int main(){
    int iValue=0;
    int iRet=0;

    printf("Enter the distance:\n");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in meters is %d",iRet);
    return EXIT_SUCCESS;
}