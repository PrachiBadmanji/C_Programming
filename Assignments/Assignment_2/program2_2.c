#include<stdio.h>

void Display(int iNo){
    int iCnt=0;
    iCnt=1;
    if(iNo<0){
        iNo=-iNo;
    }
    while(iNo>=iCnt){
        printf("*");
        iNo--;
    }
}

int main(){
    int iValue=0;
    printf("Enter a number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}