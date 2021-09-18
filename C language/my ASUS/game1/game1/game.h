#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row, int col);
void Compulter_move(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);