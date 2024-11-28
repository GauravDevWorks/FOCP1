#include <stdio.h>

// 11. Program to accept number of employees and basic salary and compute bonus (12% of salary).
int main() {
    int num_employees;
    float salary, bonus;
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);
    printf("Enter the basic salary: ");
    scanf("%f", &salary);
    bonus = salary * 0.12;
    printf("Bonus per employee: %.2f\n", bonus);
    return 0;
}
