#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int number = 0;
  int *pNumber = NULL;
  pNumber = &number;
  printf("number's address: %p\n", &number);
  printf("pNumber's address: %p\n", (void *)&pNumber);
  printf("pNumber size: %zd bytes\n", sizeof(pNumber));
  *pNumber += 10;
  printf("new Number: %d\n", number);

  // do not dereference an uninitialized pointer
  int *pt = NULL;
  *pt = 5;
  printf("%d\n", *pt);
  return 0;
}
