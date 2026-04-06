#include <iostream>
#include "game.h"
using namespace std;

int main()
{    
    initializeBoard();
    char player = 'X';
    int row, col;

    while (true)
    {
        printBoard();
        cout << "Player " << player << ", enter row and column: ";
        cin >> row >> col;

        if (!makeMove(row, col, player))
        {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        if (checkWin())
        {
            printBoard();
            cout << "Player " << player << " wins!\n";
            break;
        }

        if (isDraw())
        {
            printBoard();
            cout << "It's a draw!\n";
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0; 
    
    }