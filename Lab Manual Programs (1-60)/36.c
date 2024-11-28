/* Q36: Grade Calculation Using Conditional Operator */
#include <stdio.h>

int main() {
    float percentage;
    char grade;

    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 75) {
        grade = 'A';
    } else {
        grade = 'B';
    }

    printf("Grade: %c\n", grade);

    return 0;
}
