#include <stdio.h>

void square(int *number);

int main(int argc, char const *argv[]) {
  int number = 10;
  square(&number);
  printf("square result: %d\n", number);

  return 0;
}

void square(int *number) { *number = (*number) * (*number); }
