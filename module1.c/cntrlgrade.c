#include<stdio.h>
int main(){
    int marks;

    printf("enter the marks of the student");
    scanf("%d", &marks);

    if(marks>90)
    {
        printf("grade a:\n");
    }else if(marks >75 && marks<=90)
    {
        printf("grade b:\n");
    }else if(marks>50 && marks<=75)
    {
        printf("grade c:\n");
    }else{
        printf("grade d:\n");
    }
    return 0;
}
