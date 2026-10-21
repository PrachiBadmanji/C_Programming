#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue){
    if(cValue>='A' && cValue<='Z'){
        printf("Uppercase Alphabet");
    }
    else if(cValue>='a' && cValue<='z'){
        printf("Lowercase Alphabet");
    }
    else if(cValue>='0' && cValue<='9'){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
}

int main(){

    char cValue='\0';
    printf("Enter a character:\n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}