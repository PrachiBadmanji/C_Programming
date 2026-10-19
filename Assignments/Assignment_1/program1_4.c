#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo){
    if(iNo%5==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main(){
    int iValue=0;
    BOOL iRet=FALSE;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    iRet=Check(iValue);
    if(iRet==TRUE){
        printf("It is divisible");
    }
    else{
        printf("It is not divisible");
    }
    return 0;
}