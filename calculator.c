#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    // Input first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);  

    // Input operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  

    // Input second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            printf("Result: %lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
