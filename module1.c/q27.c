#include<stdio.h>
int main(){
    int days;
    float months;
    printf("enter numbers of  days:");
    scanf("%d", &days);

    // convert days into months
    months = days/30.0;

    // output the result
    printf("%d days is approximately %.2f months.\n",days, months);

    return 0;
}
