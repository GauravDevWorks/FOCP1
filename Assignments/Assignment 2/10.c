// Q10. WAP to count prime numbers in an array.

#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}

int main() {
    int arr[] = {10, 15, 2, 17, 23, 4}, n = 6, count = 0;
    for (int i = 0; i < n; i++) if (isPrime(arr[i])) count++;
    printf("%d\n", count);
    return 0;
}
