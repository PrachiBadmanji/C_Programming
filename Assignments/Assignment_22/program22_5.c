/*
    input:8
    output: 2   4   6   8   10  12  14  16  
    
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo){
    int i=0;
    
    for(int i=2;i<=iNo*2;i++){
        if(i%2==0){
            printf("%d\t",i);
        }
    }
}

int main(){
    int iValue=0;
    printf("Enter number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}