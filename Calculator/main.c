#include <stdio.h>
#include <stdlib.h>

//Building a basic calculator
int main()
{
    double num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("\nEnter the operator: ");
    scanf(" %c", &op);

    printf("\nEnter the second number: ");
    scanf("%lf", &num2);

    if(op == '+')
    {
        printf("\n%.2f + %.2f = %.2f\n\n", num1, num2, num1 + num2);
    }
    else if(op == '-')
    {
        printf("\n%.2f - %.2f = %.2f\n\n", num1, num2, num1 - num2);
    }
    else if(op == '*')
    {
        printf("\n%.2f * %.2f = %.2f\n\n", num1, num2, num1 * num2);
    }
    else if(op == '/')
    {
        printf("\n%.2f / %.2f = %.2f\n\n", num1, num2, num1 / num2);
    }
    else
    {
        printf("\nInvalid Input\n\n");
    }

    return 0;
}
