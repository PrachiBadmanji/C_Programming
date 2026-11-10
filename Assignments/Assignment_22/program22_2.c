/*
    input:5
    output: 5   #   4   #   3   #   2   #   1   #
    
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo){
    int i=0;
    
    for(int i=iNo;i>=1;i--){
        printf("%d\t#\t",i);
    }
}

int main(){
    int iValue=0;
    printf("Enter number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}