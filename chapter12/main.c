#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyString(char *src, char *dst);

int main(int argc, char const *argv[]) {
  int number = 0;
  int *pNumber = NULL;
  pNumber = &number;
  printf("number's address: %p\n", &number);
  printf("pNumber's address: %p\n", (void *)&pNumber);
  printf("pNumber size: %zd bytes\n", sizeof(pNumber));
  *pNumber += 10;
  printf("new Number: %d\n", number);

  // do not dereference an uninitialized pointer
  /*

    int *pt = NULL;
  *pt = 5;
  printf("%d\n", *pt);
  */

  int i = 10;
  float f = 2.3;
  char ch = 'k';

  void *vptr;
  vptr = &i;
  printf("value of i = %d\n", *(int *)vptr);

  vptr = &f;
  printf("value of f = %.2f\n", *(float *)vptr);

  vptr = &ch;
  printf("value of ch = %c\n", *(char *)vptr);

  char multiple[] = "a string";
  char *p = multiple;
  for (int i = 0; i < strlen(multiple); ++i) {
    printf("multiple[%d]=%c *(p+%d)=%c &multiple[%d]=%p p+%d=%p\n", i,
           multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
  }

  char str1[] = "a string to be copied";
  char str2[50];
  copyString(str1, str2);
  printf("%s\n", str2);
  return 0;
}

void copyString(char *src, char *dst) {
  while (*src) {
    *dst++ = *src++;
  }
  *dst = '\0';
}
