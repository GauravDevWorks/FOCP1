/* Q35: Largest of Two Numbers Using Conditional Operator */
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int largest;

    if (num1 > num2) {
        largest = num1;
    } else {
        largest = num2;
    }

    printf("Largest number: %d\n", largest);

    return 0;
}
