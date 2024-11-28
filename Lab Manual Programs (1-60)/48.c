/* Q48: Write a program to compute the square of 1-10 numbers using a do-while loop */
#include <stdio.h>

int main() {
    int i = 1;
    
    do {
        printf("Square of %d = %d\n", i, i * i);
        i++;
    } while(i <= 10);
    
    return 0;
}
