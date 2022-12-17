#include <stdio.h>
#define MONTHS 12
int main(int argc, char const *argv[])
{
  int days[MONTHS] = {
      31,
      28,
      [4] = 31,
      30,
      31,
      [1] = 29};

  for (int i = 0; i < MONTHS; i++)
  {
    printf("%02d:%2d\n", i + 1, days[i]);
  }

  int raw[MONTHS] = {0};
  for (int i = 0; i < MONTHS; i++)
  {
    printf("%02d:%2d\n", i + 1, raw[i]);
  }

  int matrix[3][4] = {{1, 2, 3, 4},
                      {1, 2, 3, 4},
                      {1, 2, 3, 4}};

  printf("%d\n================================\n", matrix[1][2]);
  printf("%d\n", matrix[0][0]);
  return 0;
}
