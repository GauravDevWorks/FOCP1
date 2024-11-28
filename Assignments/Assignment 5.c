#include <stdio.h>

int main() {
    char word[] = "program";
    char guess[50];
    int chances = 3;
    int i, correct = 0;
    char letter;

    for (i = 0; word[i] != '\0'; i++) {
        guess[i] = '_';
    }
    guess[i] = '\0';

    printf("Welcome to Hangman Game!\n");
    printf("You have %d chances to guess the word.\n", chances);

    while (chances > 0) {
        printf("\nWord: %s\n", guess);
        printf("Guess a letter: ");
        scanf(" %c", &letter);

        int found = 0;
        
        for (i = 0; word[i] != '\0'; i++) {
            if (word[i] == letter) {
                guess[i] = letter;
                found = 1;
                correct++;
            }
        }

        if (found == 0) {
            chances--;
            printf("Wrong guess! You have %d chances left.\n", chances);
        } else {
            printf("Good guess!\n");
        }

        if (correct == i) {
            printf("\nCongratulations! You've guessed the word: %s\n", word);
            break;
        }
    }

    if (chances == 0) {
        printf("\nYou lost! The word was: %s\n", word);
    }

    return 0;
}
