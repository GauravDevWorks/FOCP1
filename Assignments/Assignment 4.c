#include <stdio.h>

int main() {
    int userChoice, computerChoice;

    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    printf("Enter computer's choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
    scanf("%d", &computerChoice);

    if (userChoice == 1) {
        printf("Your choice: Rock\n");
    } else if (userChoice == 2) {
        printf("Your choice: Paper\n");
    } else if (userChoice == 3) {
        printf("Your choice: Scissors\n");
    } else {
        printf("Invalid input\n");
        return 0;
    }

    if (computerChoice == 1) {
        printf("Computer choice: Rock\n");
    } else if (computerChoice == 2) {
        printf("Computer choice: Paper\n");
    } else if (computerChoice == 3) {
        printf("Computer choice: Scissors\n");
    } else {
        printf("Invalid input for computer\n");
        return 0;
    }

    if (userChoice == computerChoice) {
        printf("Tie!\n");
    } else if ((userChoice == 1 && computerChoice == 2) || (userChoice == 2 && computerChoice == 3) || (userChoice == 3 && computerChoice == 1)) {
        printf("Computer wins\n");
    } else {
        printf("You win\n");
    }

    return 0;
}
