#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv){
    if(chDiv=='A' ||chDiv=='a'){
        printf("Your exam is at 7 AM");
    }
    else if(chDiv=='B' || chDiv=='b'){
        printf("Your exam is at 8.30 AM");
    }
    else if(chDiv=='C'|| chDiv=='c'){
        printf("Your exam is at 9.20 AM");
    }
    else if(chDiv=='D' || chDiv=='d'){
        printf("Your exam is at 10.30 AM");
    }
    else{
        printf("Enter valid division");
    }
}

int main(){
    char cValue='\0';

    printf("Enter your division:\n");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);
    return EXIT_SUCCESS;
}