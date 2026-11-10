/*
    input:  MarvellouS
    output: 0

    input: MarvellouS Infosystems
    output: 1

    input: MarvellouS Infosystems by Piyush Manohar Khairnar
    output: 5
    
*/
#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str){
    int iCount=0;
    while(*str!='\0'){
        if(*str==' '){
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main(){
    char arr[20];
    int iRet=0;
    printf("Enter string:\n");
    scanf("%[^\n]",arr);

    iRet=CountWhite(arr);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}