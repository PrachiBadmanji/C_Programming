/*
    input:5
    output: 1   *   2   *   3   *   4   *   5   *
    
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo){
    int i=0;
    
    for(int i=1;i<=iNo;i++){
        printf("%d\t*\t",i);
    }
}

int main(){
    int iValue=0;
    printf("Enter number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}