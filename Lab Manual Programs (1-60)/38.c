/* Q38. Write a C program that accepts the number of 6's, 4's, 2's, and 1's scored by a cricket player in a match. The program should then compute the total runs scored by the player and determine if the player has:

1. Scored a Century (100 or more runs),
2. Scored a Half-Century (50 to 99 runs),
3. Scored Less than 50 runs. */

#include <stdio.h>

int main() {
    // Declare variables to hold the number of 6's, 4's, 2's, and 1's
    int sixes, fours, twos, ones;
    int total_runs;

    // Accept input from the user for each type of run
    printf("Enter the number of 6's scored by the player: ");
    scanf("%d", &sixes);

    printf("Enter the number of 4's scored by the player: ");
    scanf("%d", &fours);

    printf("Enter the number of 2's scored by the player: ");
    scanf("%d", &twos);

    printf("Enter the number of 1's scored by the player: ");
    scanf("%d", &ones);

    // Calculate the total runs
    total_runs = (sixes * 6) + (fours * 4) + (twos * 2) + ones;

    // Display the total runs scored
    printf("\nTotal runs scored by the player: %d\n", total_runs);

    // Determine and display if the player scored a century, half-century, or less than 50
    if (total_runs >= 100) {
        printf("Player has scored a Century!\n");
    } else if (total_runs >= 50) {
        printf("Player has scored a Half-Century!\n");
    } else {
        printf("Player has scored less than 50 runs.\n");
    }

    return 0;
}
