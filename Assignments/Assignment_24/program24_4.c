/*
    input:  Marvellous Multi OS
            M
    output: 11

    input: Marvellous Multi OS
           W
    output: -1

    input: Marvellous Multi OS
           e
    output: 4
    
*/
#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str,char ch){
    int iCnt=0;
    int pos=-1;
    
    while(*str!='\0'){
        if(*str==ch){
            pos=iCnt;
        }
        iCnt++;
        str++;
    }
    
    return pos;
}

int main(){
    char arr[20];
    char cValue;
    int iRet=0;

    printf("Enter string:\n");
    scanf("%[^\n]s",arr);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    iRet=LastChar(arr,cValue);
    printf("Character location is:%d",iRet);
    return EXIT_SUCCESS;
}