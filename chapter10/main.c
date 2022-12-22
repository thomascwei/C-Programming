#include <string.h>
#include <stdio.h>

char first[50];
char second[50];
int main(int argc, char const *argv[])
{
  char myString[] = "lkdjdfasdlkf";
  printf("the length of myString is %d\n", strlen(myString));
  strcpy(first, myString);
  strncpy(second, myString, sizeof(second) - 1);
  printf("%s\n", first);
  printf("%s\n", second);

  char firstPart[100] = "Hello";
  char secondPart[] = "World";
  printf("%s\n", strcat(firstPart, secondPart));

  printf("%d\n", strcmp("A", "A"));
  printf("%d\n", strcmp("A", "AB"));
  printf("%d\n", strcmp("B", "AB"));

  return 0;
}
