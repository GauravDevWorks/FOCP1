// Q13. WAP to cyclically rotate the array clockwise by one time.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5, last = arr[n - 1];

    for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = last;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
