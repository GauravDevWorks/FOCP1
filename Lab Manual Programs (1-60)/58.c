/*
Q 58: WAP to compute the simple interest for 3 sets of p, n, and r.
*/

#include <stdio.h>

int main() {
    float p, n, r, si;
    
    for (int i = 1; i <= 3; i++) {
        printf("Enter principal (p), time (n in years), and rate of interest (r) for set %d: ", i);
        scanf("%f %f %f", &p, &n, &r);
        si = (p * n * r) / 100;
        printf("Simple Interest for set %d: %.2f\n", i, si);
    }
    
    return 0;
}
