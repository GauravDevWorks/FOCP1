#include <stdio.h>

// 4. Program to convert Fahrenheit temperature into Centigrade.
int main() {
    float fahrenheit, centigrade;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    centigrade = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Centigrade: %.2f\n", centigrade);
    return 0;
}
