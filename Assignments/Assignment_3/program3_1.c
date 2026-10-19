#include<stdio.h>

void Print_Even(int iNo){
    int iCnt=0;

    if(iNo<=0){
        return;
    }

    for(iCnt=2;iCnt<=(2*iNo);iCnt++){
        if(iCnt%2==0){
            printf("%d ",iCnt);
        }
    }
}

int main(){
    int iValue=0;
    printf("Enter a number :\n");
    scanf("%d",&iValue);

    Print_Even(iValue);
    return 0;
}