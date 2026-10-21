#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear){
    if(iYear<=0){
        printf("Invalid input");
    }
    else if((iYear%400==0) || ((iYear%4==0) && (iYear%100!=0))){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
}

int main(){
    int iYear=0;

    printf("Enter the year:\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}