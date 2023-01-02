#include <stdio.h>
#include <string.h>

void reverseWord(char str[]);

int main(int argc, char const *argv[])
{
  printf("please enter a word\n");
  char str[256];
  scanf("%s", str);
  reverseWord(str);
  return 0;
}

void reverseWord(char str[])
{
  int length = strlen(str);
  char result[length];
  for (size_t i = 0; i < length; i++)
  {
    result[length - i] = str[i];
  }

  printf("%s\n", result);
}