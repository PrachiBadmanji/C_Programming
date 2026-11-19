/*
    input: A
            
    output: Decimal         65
            Octal           0101
            Hexadecimal     0X41
    
*/
#include<stdio.h>
#include<stdlib.h>

void Display(char ch){
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        printf("Decimal\t\t%d\n",ch);
        printf("Octal\t\t0%o\n",ch);
        printf("Hexadecimal\t%#X\n",ch);
    }
}

int main(){
    char cValue='\0';

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    Display(cValue);
    return EXIT_SUCCESS;
}