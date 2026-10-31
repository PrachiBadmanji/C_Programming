#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo){
    int iCnt=0;
    iCnt=iNo*70;
    return iCnt;
}

int main(){

    int iValue=0;
    int iRet=0;
    printf("Enter number of USD:\n");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);
    printf("Value in INR is %d",iRet);
    return EXIT_SUCCESS;
}