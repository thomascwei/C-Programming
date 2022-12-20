#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// check if a player has won
void checkForWin(void);
// redraw the board for each turn
void drawBoard(void);
// set the char array with a selection and check invalid
void markBoard(void);

char coordinate[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool isUser2 = false;
int enter = 0;
char enterChar[2] = {"\0"};
// TODO:
// scanf user enter
// markBoard
// replace with O or X
// checkForWin
// switch player
// drawBoard
int main(int argc, char const *argv[]) {
  drawBoard();
  scanf("%d", &enter);
  itoa(enter, enterChar, 10);
  if (isUser2) {
    coordinate[enter] = 'X';
  } else {
    coordinate[enter] = 'O';
  }
  drawBoard();

  return 0;
}
void drawBoard(void) {
  printf(
      "\
              Tic Tac Toe        \n \
      \n \
      Palyer 1 (O)  -  Player 2 (X)\n \
      \n \
      \n \
            |      |      \n \
         %c  |   %c  |   %c  \n \
      ______|______|______\n \
            |      |      \n \
         %c  |   %c  |   %c  \n \
      ______|______|______\n \
            |      |      \n \
         %c  |   %c  |   %c  \n \
            |      |      \n \
      \n \
      Player %i, enter a number:\n \
      ",
      coordinate[1], coordinate[2], coordinate[3], coordinate[4], coordinate[5],
      coordinate[6], coordinate[7], coordinate[8], coordinate[9], isUser2 + 1

  );
}