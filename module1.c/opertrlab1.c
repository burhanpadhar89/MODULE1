#include<stdio.h>
int main(){
    double num1, num2;
    char operator;
      printf("enter an operator (+, -, *, / , %%): ");
    scanf(" %c", &operator);

    printf("enter first number: ");
    scanf("%lf", &num1);

  

    printf("enter second number:");
    scanf("%lf" , &num2);

    switch (operator){
        case'+':
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        break;
        case'-':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
         case'*':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
        case'/':
        if(num2 != 0){
            printf("%.2f / %.2f =%.2f\n", num1, num2, num1/ num2);
        }
        else{
        printf("error! division by zero.\n");
        }
        break;
    case '%':
            if((int)num1 == num1 && (int)num2 ==num2) {
        printf("%.0lf %% %.0lf = %.0lf\n" ,num1, num2, (int)num1 % (int)num2);
    }
    else{
        printf("error! modulus operator requires integer values.\n");
    }
    break;
    default:
    printf("Invalid input.");
    break;
    }
}
