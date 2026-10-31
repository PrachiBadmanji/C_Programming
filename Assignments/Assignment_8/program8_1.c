#include<stdio.h>
#include<stdlib.h>

void Number(int iNo){
    if(iNo<0){
        printf("Invalid");
    }
    else if(iNo>0 && iNo<50){
        printf("Small");
    }
    else if(iNo>=50 && iNo<100){
        printf("Medium");
    }
    else{
        printf("Large");
    }
}

int main(){

    int iValue=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    Number(iValue);
    return EXIT_SUCCESS;
}