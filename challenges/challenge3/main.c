#include <stdio.h>
int main(int argc, char const *argv[]) {
  enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
  enum Company var1 = XEROX;
  enum Company var2 = GOOGLE;
  enum Company var3 = EBAY;
  printf("Company1:%d\n", var1);
  printf("Company2:%d\n", var2);
  printf("Company3:%d\n", var3);

  return 0;
}
