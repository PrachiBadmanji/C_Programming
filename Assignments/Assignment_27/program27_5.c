/*
    input: MarvellouS
            
    output:SuollevraM
    
*/
#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str){
    int iCnt=0;
    while(str[iCnt]!='\0'){
        iCnt++;
    }
    int iStart=0;
    int iEnd=iCnt-1;
    char temp='\0';

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

    printf("Enter the string:\n");
    scanf("%[^\n]s",arr);

    Reverse(arr);
    printf("Reversed string is:%s",arr);
    return EXIT_SUCCESS;
}