/*
    input:4
    output: #    1   *  #   2   *   #   3   *   #   4   * 
    
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo){
    int i=0;
    
    for(int i=1;i<=iNo;i++){
        printf("#\t%d\t*\t",i);
    }
}

int main(){
    int iValue=0;
    printf("Enter number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}