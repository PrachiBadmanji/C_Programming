/*
    input: Q
            
    output: Q   R   S   T   U   V   W   X   Y   Z   

    input:  m
           
    output: m   l   k   j   i   h   g   f   e   d   c   b   a   

    input:  8

    output:
    
*/
#include<stdio.h>
#include<stdlib.h>

void Display(char ch){
    if(ch>='a' && ch<='z'){
        while(ch!='a'-1){                 //96
            printf("%c\t",ch);
            ch--;
        }
    }
    else if(ch>='A' && ch<='Z'){
        while(ch!='Z'+1){                //123
            printf("%c\t",ch);
            ch++;
        }
    }
    else{
        return;
    }
}

int main(){
    char cValue='\0';

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    Display(cValue);
    return EXIT_SUCCESS;
}