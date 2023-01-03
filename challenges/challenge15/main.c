#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number = 10;
  int *pNumber = NULL;
  pNumber = &number;
  printf("address of pointer: %p\n", &pNumber);
  printf("value of pointer: %p\n", pNumber);
  printf("value of pointer point to: %d\n", *pNumber);
  return 0;
}
