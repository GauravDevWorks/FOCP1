/*
Question 19: WAP to accept age and nationality for the person. Check whether the person is eligible to vote or not.
*/

#include <stdio.h>

int main() {
    int age;
    char nationality[20];

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your nationality: ");
    scanf("%s", nationality);
    
    if (age >= 18 && strcmp(nationality, "Indian") == 0)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    return 0;
}
