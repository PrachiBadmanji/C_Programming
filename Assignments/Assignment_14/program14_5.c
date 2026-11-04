#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo){
    int iCnt=0;
    int iFactSum=0;
    int iNonFactSum=0;
    int iFactDiff=0;
    for(iCnt=1;iCnt<iNo;iCnt++){
        if(iNo%iCnt==0){
            iFactSum=iFactSum+iCnt;
        }
        else{
            iNonFactSum=iNonFactSum+iCnt;
        }
    }
    iFactDiff=iFactSum-iNonFactSum;
    return iFactDiff;
}

int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}