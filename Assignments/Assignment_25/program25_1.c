/*
    input:  F
            
    output: TRUE

    input:  &
           
    output: FALSE
    
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch){
    if((ch>=65 &&ch<=90) ||(ch>=97 && ch<=122)){
        return TRUE;
    }
    else{
        return FALSE;
    }
    /*
    if((ch>='a' &&ch<='z') ||(ch>='A' && ch<='Z')){
        return TRUE;
    }
    else{
        return FALSE;
    }
    */
}

int main(){
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);
    if(bRet==TRUE){
        printf("It is a character");
    }
    else{
        printf("It is not a character");
    }
    return EXIT_SUCCESS;
}