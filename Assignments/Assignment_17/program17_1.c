/*
    iRow=4
    iCol=4

    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol){
    int i=0,j=0;
    int k=0;
    for(i=1,k=1;i<=iRow;i++){
        for(j=1;j<=iCol;j++,k++){
            if(k<=9){
                printf("%d\t",k);
            }
            else{
                k=1;
                printf("%d\t",k);
            }
        }
        printf("\n");
    }
}

int main(){
    int iValue1=0,iValue2=0;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return EXIT_SUCCESS;
}