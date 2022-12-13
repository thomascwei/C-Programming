#include <stdio.h>
int main(int argc, char const *argv[]) {
  printf("int size: %zd bytes\n", sizeof(int));
  printf("char size: %u bytes\n", sizeof(char));
  printf("short size: %u bytes\n", sizeof(short));

  printf("long size: %d bytes\n", sizeof(long));
  printf("long long size: %d bytes\n", sizeof(long long));
  printf("double size: %d bytes\n", sizeof(double));
  printf("long double size: %d bytes\n", sizeof(long double));

  return 0;
}
