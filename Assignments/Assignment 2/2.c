// Q2. WAP to print grade of students as per their marks given in an array.

#include <stdio.h>

int main() {
    int marks[] = {85, 70, 50, 35}, n = 4;
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 75) printf("A ");
        else if (marks[i] >= 60) printf("B ");
        else if (marks[i] >= 40) printf("C ");
        else printf("D ");
    }
    return 0;
}
