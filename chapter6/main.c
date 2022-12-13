#include <stdbool.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 33;
  int b = 22;
  int c = a + b;
  printf("c is %d\n", c);
  c = a * b;
  printf("c is %d\n", c);
  c = a % b;
  printf("c is %d\n", c);

  printf("c is %d\n", a++);
  printf("c is %d\n", a);

  printf("c is %d\n", ++b);

  _Bool x = true;
  _Bool y = false;
  _Bool result;
  result = x && y;
  printf("result1 is %d\n", result);
  x = 0;
  y = 0;
  result = x || y;
  printf("result2 is %d\n", result);
  result = !x;
  printf("result3 is %d\n", result);

  unsigned int aa = 60;   // 0011 1100
  unsigned int bb = 13;   // 0000 1101
  int result2 = aa & bb;  // 0000 1100
  printf("result4 is %d\n", result2);
  result2 = aa | bb;  // 0011 1101
  printf("result5 is %d\n", result2);
  result2 = aa ^ bb;  // 0011 0001
  printf("result6 is %d\n", result2);
  result2 = ~aa;  // 11000011
  printf("result7 is %d\n", result2);
  result2 = aa << 2;  // 1111 0000
  printf("result8 is %d\n", result2);
  result2 = aa >> 3;  // 0000 0111
  printf("result9 is %d\n", result2);

  return 0;
}
