#include<stdio.h>
#include<stdlib.h>

void DisplayASCII(){
    int iValue=0;
    printf("Decimal\tSymbol\tHexadecimal\tOctal\n");
    for(iValue=0;iValue<=255;iValue++){
        printf("%d\t %c\t %x \t\t %o \n ",iValue,iValue,iValue,iValue);
    }
}

int main(){

    DisplayASCII();
    return EXIT_SUCCESS;
}