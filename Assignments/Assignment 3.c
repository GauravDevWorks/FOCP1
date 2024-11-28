#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double b, c, d;

    while(1) {
        printf("\n-----Simple Calculator-----\n");
        printf("1. Add\n");
        printf("2. Sub\n");
        printf("3. Mul\n");
        printf("4. Div\n");
        printf("5. Log\n");
        printf("6. Sqrt\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &a);

        if(a == 1) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &b, &c);
            d = b + c;
            printf("The result is: %.2lf\n", d);
        }
        if(a == 2) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &b, &c);
            d = b - c;
            printf("Result is: %.2lf\n", d);
        }
        if(a == 3) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &b, &c);
            d = b * c;
            printf("Answer: %.2lf\n", d);
        }
        if(a == 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &b, &c);
            if(c != 0) {
                d = b / c;
                printf("Answer: %.2lf\n", d);
            }
            else {
                printf("Cannot divide by 0\n");
            }
        }
        if(a == 5) {
            printf("Enter number: ");
            scanf("%lf", &b);
            if(b > 0) {
                d = log(b);
                printf("Log value: %.2lf\n", d);
            } else {
                printf("Cannot take log of negative or 0\n");
            }
        }
        if(a == 6) {
            printf("Enter number: ");
            scanf("%lf", &b);
            if(b >= 0) {
                d = sqrt(b);
                printf("Sqrt value: %.2lf\n", d);
            }
            else {
                printf("Cannot take sqrt of negative number\n");
            }
        }
        if(a == 7) {
            printf("Exit...\n");
            break;
        }
        else {
            printf("Wrong choice try again\n");
        }
    }

    return 0;
}
