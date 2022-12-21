#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// check if a player has won
void checkForWin(void);
// redraw the board for each turn
void drawBoard(void);
// set the char array with a selection and check invalid
bool markBoard(int enter);
void showEnterHint(void);

char coordinate[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool isUser2 = false;
int choice = 0;
// char enterChar[2] = {'\0'};
int main(int argc, char const *argv[])
{
  for (int try = 0; try < 9; try++)
  {
    drawBoard();
    showEnterHint();
    // 持續檢查輸入值，通過後才跳出迴圈
    while (true)
    {
      // TODO: 防呆，防止輸入char
      scanf("%d", &choice);
      bool result = markBoard(choice);
      if (result)
      {
        break;
      }
    }

    checkForWin();
    isUser2 = !isUser2;
  }
  printf("This game ended in a tie.\n");
  return 0;
}

void drawBoard(void)
{
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
      \n",
      coordinate[1], coordinate[2], coordinate[3], coordinate[4], coordinate[5],
      coordinate[6], coordinate[7], coordinate[8], coordinate[9]);
}

void showEnterHint(void)
{
  printf("Player %i, enter a number:\n", isUser2 + 1);
}

void checkForWin(void)
{
  // check row
  for (int i = 1; i < 8; i = i + 3)
  {
    if (coordinate[i] == coordinate[i + 1] && coordinate[i + 1] == coordinate[i + 2])
    {
      drawBoard();
      printf("player%d win!\n", isUser2 + 1);
      exit(0);
    }
  }
  // check column
  for (int i = 1; i <= 3; i++)
  {
    if (coordinate[i] == coordinate[i + 3] && coordinate[i + 3] == coordinate[i + 6])
    {
      drawBoard();
      printf("player%d win!", isUser2 + 1);
      exit(0);
    }
  }
  // check diagonal
  if (coordinate[1] == coordinate[5] && coordinate[5] == coordinate[9])
  {
    drawBoard();
    printf("player%d win!", isUser2 + 1);
    exit(0);
  }
  if (coordinate[3] == coordinate[5] && coordinate[5] == coordinate[7])
  {
    drawBoard();
    printf("player%d win!\n", isUser2 + 1);
    exit(0);
  }
}

bool markBoard(int enter)
{
  if (enter < 1 || enter > 9)
  {
    printf("enter range error, try again!\n");
    return false;
  }
  // 輸入位置已有值
  if (coordinate[enter] == 'O' || coordinate[enter] == 'X')
  {
    printf("enter value exist, try again!\n");
    return false;
  }
  // 通過檢查後做上記號
  if (isUser2)
  {
    coordinate[enter] = 'X';
  }
  else
  {
    coordinate[enter] = 'O';
  }
  return true;
}
