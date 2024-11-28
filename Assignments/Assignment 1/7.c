// Q7. WAP for Binary to Decimal conversion & Decimal to Binary conversion.

#include <stdio.h>

void binaryToDecimal() {
    int binary, decimal = 0, base = 1, rem;
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    printf("%d\n", decimal);
}

void decimalToBinary() {
    int decimal, binary[32], i = 0;
    scanf("%d", &decimal);

    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    for (int j = i - 1; j >= 0; j--) printf("%d", binary[j]);
    printf("\n");
}

int main() {
    int choice;
    scanf("%d", &choice);

    if (choice == 1) binaryToDecimal();
    else if (choice == 2) decimalToBinary();

    return 0;
}
