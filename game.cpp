#include <iostream>
using namespace std;

char board[3][3];

// Initialize board
void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// Print board
void printBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

// Check winner
int checkWin() {
    // Rows & Columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2] &&
            board[i][0] != ' ')
            return 1;

        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i] &&
            board[0][i] != ' ')
            return 1;
    }

    // Diagonals
    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2] &&
        board[0][0] != ' ')
        return 1;

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0] &&
        board[0][2] != ' ')
        return 1;

    return 0;
}

// Check draw
bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

// Make move
bool makeMove(int row, int col, char player) {
    if (row < 0 || row > 2 || col < 0 || col > 2)
        return false;

    if (board[row][col] != ' ')
        return false;

    board[row][col] = player;
    return true;
}

// Main function
int main() {
    initializeBoard();
    char player = 'X';
    int row, col;

    while (true) {
        printBoard();

        cout << "Player " << player << " (row and column 0-2): ";
        cin >> row >> col;

        if (!makeMove(row, col, player)) {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        if (checkWin()) {
            printBoard();
            cout << "🎉 Player " << player << " wins!\n";
            break;
        }

        if (isDraw()) {
            printBoard();
            cout << "It's a draw!\n";
            break;
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}