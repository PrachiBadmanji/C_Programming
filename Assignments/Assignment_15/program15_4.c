#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1,int iNo2,int iNo3){
    int iMult=1;
    int iZeroCount=0;

    if(iNo1==0){
        iZeroCount++;
    }
    else{
        iMult=iMult*iNo1;
    }
    if(iNo2==0){
        iZeroCount++;
    }
    else{
        iMult=iMult*iNo2;
    }
    if(iNo3==0){
        iZeroCount++;
    }
    else{
        iMult=iMult*iNo3;
    }
    if(iZeroCount==3){
        return 0;
    }
    
    return iMult;
}

int main(){
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}