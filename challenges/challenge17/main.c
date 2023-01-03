#include <stdio.h>

int calculateStringLength(const char *str);

int main(int argc, char const *argv[]) {
  char sstr[] = "dddyyy";
  int length = 0;
  length = calculateStringLength(sstr);
  printf("sstr= %s\n", sstr);

  printf("sstr len=%d", length);
  return 0;
}

int calculateStringLength(const char *str) {
  const char *endOfString = str;
  while (*endOfString) {
    ++endOfString;
  }
  return endOfString - str;
}
