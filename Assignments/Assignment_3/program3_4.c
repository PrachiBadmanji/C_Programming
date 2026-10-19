#include<stdio.h>

void DisplayConvert(char CValue){
    if(CValue>='a' && CValue<='z'){                     //a=97
        printf("%c",CValue-32);
    }
    else if(CValue>='A' && CValue<='Z'){                //A=65
        printf("%c",CValue+32);
    }
}

int main(){
    char cValue='\0';
    printf("Enter a character:\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}