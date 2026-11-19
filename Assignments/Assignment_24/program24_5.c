/*
    input:  "abcd"
            
    output: "dcba"

    input:  "abba"
           
    output: "abba"
    
*/
#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str){
    int iCnt=0;
    int iStart=0;
    int iEnd=0;
    char temp;
    
    while(str[iCnt]!='\0'){
        iCnt++;
    }
    iEnd=iCnt-1;

    while(iStart<iEnd){
        temp=str[iStart];
        str[iStart]=str[iEnd];
        str[iEnd]=temp;

        iStart++;
        iEnd--;
    }
}

int main(){
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^\n]s",arr);

    StrRevX(arr);
    printf("Modified string is:%s",arr);
    return EXIT_SUCCESS;
}