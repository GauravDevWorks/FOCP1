// Q9. WAP to find a peak element which is not smaller than its neighbors.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 15, 2, 23, 90, 67}, n = 7;
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1])) {
            printf("%d\n", arr[i]);
            break;
        }
    }
    return 0;
}
