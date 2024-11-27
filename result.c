#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, m6, t;
    float p;

    printf("Enter marks for six subjects: ");
    scanf("%d %d %d %d %d %d", &m1, &m2, &m3, &m4, &m5, &m6);

    // Calculate total marks and percentage
    t = m1 + m2 + m3 + m4 + m5 + m6;
    p = (t / 600.0) * 100;

    // Display results
    printf("\nResult\n");
    printf("Total Marks = %d\n", t);
    printf("Percentage = %.2f%%\n", p);

    // Determine grade
    if (p >= 80) {
        printf("Distinction\n");
    } else if (p >= 60) {
        printf("First Division\n");
    } else if (p >= 50) {
        printf("Second Division\n");
    } else if (p >= 40) {
        printf("Third Division\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
