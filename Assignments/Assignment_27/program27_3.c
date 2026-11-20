/*
    input: MarvellouS
            
    output: 6  (8-2)
    
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(char *str){
    int iCntCapital=0;
    int iCntSmall=0;
    while(*str!='\0'){
        if(*str>='A' && *str<='Z'){
            iCntCapital++;
        }
        else if(*str>='a' && *str<='z'){
            iCntSmall++;
        }
        str++;
    }
    return iCntSmall-iCntCapital;
}

int main(){
    char arr[20];
    int iRet=0;

    printf("Enter the string:\n");
    scanf("%[^\n]s",arr);

    iRet=Difference(arr);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}