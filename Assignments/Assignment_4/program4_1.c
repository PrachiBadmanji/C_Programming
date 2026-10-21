#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo){
    if(iNo>0){
        printf("Number is positive");
    }
    else if(iNo<0){
        printf("Number is negative");
    }
    else{
        printf("Number is zero");
    }
}

int main(){
    int iValue=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}