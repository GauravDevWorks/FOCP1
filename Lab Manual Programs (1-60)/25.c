/*
Question 25: WAP to accept marks in 3 subjects. Check whether a candidate is eligible for a degree course, diploma course, or certificate course.
*/

#include <stdio.h>

int main() {
    float marks1, marks2, marks3, average;

    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    
    average = (marks1 + marks2 + marks3) / 3;

    if (average >= 60)
        printf("Eligible for a degree course.\n");
    else if (average >= 50)
        printf("Eligible for a diploma course.\n");
    else
        printf("Eligible for a certificate course.\n");

    return 0;
}
