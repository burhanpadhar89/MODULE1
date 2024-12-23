#include<stdio.h>
int main(){
    int num1, num2,num3, res;
    printf("enter num 1 and num 2 and num3");
    scanf("%d %d %d",&num1 , &num2, &num3 );
    res=num1+num2+num3;
    printf("\n addition %d", res);
    res=num1-num2-num3;
    printf("\n subtraction %d", res);
    res=num1*num2*num3;
    printf("\n multiplication %d", res);
    res=num1/num2/num3;
    printf("\n division %d", res);
    res=num1%num2%num3;
    printf("\n modulo %d", res);
}