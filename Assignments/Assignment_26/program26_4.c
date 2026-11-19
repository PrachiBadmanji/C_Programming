/*
    input: %
            
    output: TRUE

    input:  d
           
    output: FALSE
    
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch){
    if((ch>=33 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=126)){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main(){
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    bRet=ChkSpecial(cValue);
    if(bRet==TRUE){
        printf("It is a special character");
    }
    else{
        printf("It is not a special character");
    }
    return EXIT_SUCCESS;
}