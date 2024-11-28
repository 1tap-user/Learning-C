#include <stdio.h>

int main() {
    int day;

    // Prompt user to enter a number
    printf("Enter an integer from 1 to 6: ");
    scanf("%d", &day);

    // Display the corresponding day of the week
    switch (day) {
        case 1:
            printf("The day corresponding to %d is Monday.\n", day);
            break;
        case 2:
            printf("The day corresponding to %d is Tuesday.\n", day);
            break;
        case 3:
            printf("The day corresponding to %d is Wednesday.\n", day);
            break;
        case 4:
            printf("The day corresponding to %d is Thursday.\n", day);
            break;
        case 5:
            printf("The day corresponding to %d is Friday.\n", day);
            break;
        case 6:
            printf("The day corresponding to %d is Saturday.\n", day);
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 6.\n");
    }

    return 0;
}
