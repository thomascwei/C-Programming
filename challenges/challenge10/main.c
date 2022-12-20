#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// 用輾轉相除法取最大公因數:
// 用较大数除以较小数，再用出现的余数（第一余数）去除除数，再用出现的余数（第二余数）去除第一余数，如此反复，直到最后余数是0为止。
// 那么最后的除数就是这两个数的最大公约数。

int gcd(int x, int y);
bool checkPostive(float x);
float absolute(float x);
float floatSquareRoot(float x);

int main(int argc, char const *argv[]) {
  if (argc != 3) {
    {
      printf("Error: Invalid number of arguments");  //
      return 1;
    }
  }
  int param1, param2;
  param1 = atoi(argv[1]);
  param2 = atoi(argv[2]);
  int ggcd = gcd(param1, param2);
  bool bbol = checkPostive(ggcd);
  printf("gcd result is %u\n", bbol);
  printf("abs result is %.2f\n", absolute(-234.5));
  float ttyy = 81.1234;
  printf("%.4f square root is %.4f\n", ttyy, floatSquareRoot(ttyy));

  return 0;
}

int gcd(int x, int y) {
  int bigger, smaller, mod;

  bigger = x > y ? x : y;
  smaller = x > y ? y : x;

  while (bigger % smaller != 0) {
    mod = bigger % smaller;
    bigger = smaller;
    smaller = mod;
  }
  printf("gcd is %d\n", smaller);
  return smaller;
};

bool checkPostive(float x) {
  bool result;
  result = x > 0 ? true : false;
  return result;
}

float absolute(float x) { return x > 0 ? x : x * -1; }

float floatSquareRoot(float x) {
  if (!checkPostive(x)) {
    printf("square root can not be negative\n");
    return -1;
  }
  return sqrt(x);
}