#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char first[50];
char second[50];
int main(int argc, char const *argv[])
{
  char myString[] = "lkdjdfasdlkf";
  printf("the length of myString is %lu\n", strlen(myString));
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

  char str[50] = "dkjfnqwdmk";
  char ch = 'q';
  char *pGot = strchr(str, ch);
  printf("%s\n", pGot);

  char txt[] = "how are you today";
  char word[] = "you";
  pGot = strstr(txt, word);
  printf("%s\n", pGot);

  char str1[80] = "asdas-cvbcbcv-tyrjutykjt";
  const char s[2] = "-";
  char *token = NULL;

  token = strtok(str1, s);
  while (token != NULL)
  {
    printf("%s\n", token);
    token = strtok(NULL, s);
  }

  double value = 0;
  strcpy(str, "3.5 2.5 1.56");

  char *pstr = str;
  char *ptr = NULL;
  while (true)
  {
    value = strtod(pstr, &ptr);
    if (pstr == ptr)
    {
      break;
    }
    else
    {
      printf(" %f\n", value);
      pstr = ptr;
    }
  }

  return 0;
}
