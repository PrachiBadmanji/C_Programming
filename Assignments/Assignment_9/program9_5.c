#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo){
    int iCnt=0,iDiff=0;
    int iEvenFact=1;
    int iOddFact=1;
    if(iNo<0){
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt>=1;iCnt--){
        if(iCnt%2!=0){
            iOddFact=iOddFact*iCnt;
        }
        else{
            iEvenFact=iEvenFact*iCnt;
        }
    }
    iDiff=iEvenFact-iOddFact;
    return iDiff;
}

int main(){

    int iValue=0;
    int iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("Factorial Difference is %d",iRet);
    return EXIT_SUCCESS;
}