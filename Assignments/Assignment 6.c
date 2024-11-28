#include <stdio.h>

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int player = 1;
int choice;
int row, col;
char mark;

void display_board() {
    printf("\n\n");
    printf("  %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf(" ---|---|--- \n");
    printf("  %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf(" ---|---|--- \n");
    printf("  %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n\n");
}

int check_win() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return 1;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }
    return 0;
}

int check_draw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return 0;
            }
        }
    }
    return 1;
}

void player_move() {
    printf("Player 1 (X), enter a number between 1 and 9 to make your move: ");
    scanf("%d", &choice);

    row = (choice - 1) / 3;
    col = (choice - 1) % 3;

    if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        printf("Invalid move, try again.\n");
        player_move();
    } else {
        board[row][col] = 'X';
    }
}

void computer_move() {
    printf("Player 2 (O), it's the computer's turn...\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                board[i][j] = 'O';
                return;
            }
        }
    }
}

int main() {
    while (1) {
        display_board();
        
        if (player == 1) {
            player_move();
            if (check_win()) {
                display_board();
                printf("Player 1 (X) wins!\n");
                break;
            }
            if (check_draw()) {
                display_board();
                printf("It's a draw!\n");
                break;
            }
            player = 2;
        } else {
            computer_move();
            if (check_win()) {
                display_board();
                printf("Player 2 (O) wins!\n");
                break;
            }
            if (check_draw()) {
                display_board();
                printf("It's a draw!\n");
                break;
            }
            player = 1;
        }
    }
    return 0;
}
