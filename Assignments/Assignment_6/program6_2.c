#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge){
    if(iAge<0 || ((fMarks<0.0f) &&(fMarks>100.0f))){
        printf("Invalid input");
    }
    else if((fMarks>=60.0f) && (iAge>=17)){
        printf("Eligible for admission");
    }
    else{
        printf("Not eligible");
    }
}

int main(){
    float fMarks=0.0f;
    int iAge=0;

    printf("Enter marks and age :\n");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);
    return EXIT_SUCCESS;
}