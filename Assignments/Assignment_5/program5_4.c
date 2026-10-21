#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo){
    if((iNo%3==0) && (iNo%5==0)){
        printf("Divisible by both");
    }
    else if(iNo%5==0){
        printf("Divisible by 5 only");
    }
    else if(iNo%3==0){
        printf("Divisible by 3 only");
    }
    else{
        printf("Not divisible by either");
    }
}

int main(){

    int iValue=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);
    return EXIT_SUCCESS;
}