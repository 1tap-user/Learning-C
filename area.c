#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float radius, length, width, base, height, area;

    do {
        printf("\nArea Calculator\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Area of Circle
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = M_PI * radius * radius; // Using math.h for π
                printf("Area of the Circle: %.2f\n", area);
                break;

            case 2: // Area of Rectangle
                printf("Enter the length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                area = length * width;
                printf("Area of the Rectangle: %.2f\n", area);
                break;

            case 3: // Area of Triangle
                printf("Enter the base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of the Triangle: %.2f\n", area);
                break;

            case 4: // Exit
                printf("Exiting the program. Goodbye!\n");
                break;

            default: // Invalid choice
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
