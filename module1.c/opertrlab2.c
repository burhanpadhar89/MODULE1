#include<stdio.h>
int main(){
    int number;

    printf("enter an integer: ");
    scanf("%d",&number);

    if(number %2 ==0){
        printf("the number is even.\n", number);
    }else {
        printf("the number is odd. \n", number);
    }
    if(number >0){
        printf("the number is positive.\n",number);
    }else if (number<0){
        printf("the number is negative.\n",number);
    }else {
        printf("the number is zero\n",number);
    }

    if(number % 3==0 && number %5==0){
        printf("the number is a multiple of both 3 and 5.\n",number);
    }else {
        printf("the number is not a multiple of both 3 and 5.\n", number);
    }
    return 0;
}
