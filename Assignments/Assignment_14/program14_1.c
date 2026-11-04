#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo){
    int iCnt=0;
    int iFact=1;
    for(iCnt=2;iCnt<=iNo/2;iCnt++){
        if(iNo%iCnt==0){
            iFact=iFact*iCnt;
        }
    }
    return iFact;
}

int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}