// Q14. WAP to print duplicates in an array.

#include <stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2}, n = 10, freq[100000] = {0};

    for (int i = 0; i < n; i++) freq[arr[i]]++;
    for (int i = 0; i < 100000; i++) if (freq[i] > 1) printf("%d ", i);
    return 0;
}
