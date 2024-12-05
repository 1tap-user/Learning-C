#include <stdio.h>

int main() 
{
    double num, square, squareRoot;

    // Input from the user
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Calculate square and square root
    square = num * num;
    squareRoot = sqrt(num);

    // Display the results
    printf("Square of %.2lf is %.2lf\n", num, square);
    printf("Square root of %.2lf is %.2lf\n", num, squareRoot);

    return 0;
}
