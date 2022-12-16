#include <stdio.h>

int main(int argc, char const *argv[]) {
  // with goto
  int a = 10;
LOOP:
  while (a < 20) {
    if (a == 15) {
      a = a + 1;
      goto LOOP;
    }
    printf("a: %d\n", a);
    a++;
  }
  // without goto
  int b = 10;
  while (b < 20) {
    if (b == 15) {
      b = b + 1;
      continue;
      ;
    }
    printf("b: %d\n", b);
    b++;
  }
  return 0;
}
