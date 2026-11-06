/*
    iRow=4
    iCol=4

    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol){
    int i=0,j=0;
    for(i=1;i<=iCol;i++){
        for(j=1;j<=iRow;j++){
            if(i%2!=0){
                printf("%c\t",'A'+(j-1));
            }
            else{
                printf("%c\t",'a'+(j-1));
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