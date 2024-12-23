#include<stdio.h>
int main(){
    int years; 
    int total_days, total_months;
    printf("enter no of years:");
    scanf("%d", &years);
    total_months= years*12;
    total_days= years*365;
    int leap_years = years / 4 - years / 100 + years / 400;
     printf("%d years is equivalent to:\n", years);
    printf("%d months\n", total_months);
    printf("%d days (including leap years)\n", total_days);
    return 0;
}