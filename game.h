#ifndef GAME_H
#define GAME_H

void initializeBoard();
void printBoard();
int checkWin();
bool isDraw();
bool makeMove(int row, int col, char player);

#endif