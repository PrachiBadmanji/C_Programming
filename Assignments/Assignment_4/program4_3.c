#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1,int iNo2){
    if(iNo1==iNo2){
        printf("Both numbers are equal");
    }
    else if(iNo1>iNo2){
        printf("%d is greater",iNo1);
    }
    else{
        printf("%d is greater",iNo2);
    }
}

int main(){

    int iValue1=0,iValue2=0;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);
    return EXIT_SUCCESS;
}