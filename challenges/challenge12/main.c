#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int charCount(char str[])
{
  char current;
  int count = 0;

  current = str[count];
  while (current != '\0')
  {
    count++;
    current = str[count];
  }
  return count;
}

void concateChar(char str1[], char str2[])
{
  char result[50];
  int resultIndex = 0;
  int count = 0;
  while (str1[count] != '\0')
  {
    result[resultIndex] = str1[count];
    count++;
    resultIndex++;
  }
  count = 0;
  while (str2[count] != '\0')
  {
    result[resultIndex] = str2[count];
    count++;
    resultIndex++;
  }
  result[resultIndex] = '\0';
  printf("final string: %s\n", result);
}

void stringCompare(char str1[], char str2[])
{
  int length1 = charCount(str1);
  int length2 = charCount(str2);
  if (length1 != length2)
  {
    printf("not equal\n");
    return;
  }
  for (int i = 0; i < length1; i++)
  {
    if (str1[i] != str2[i])
    {
      printf("not equal\n");
      return;
    }
  }
  printf("equal!!!\n");
}

int main(int argc, char const *argv[])
{
  char enter[20];
  printf("Enter a word\n");
  scanf("%s", enter);
  printf("size  %lu\n", sizeof(enter));
  int result = charCount(enter);
  printf("length: %d\n", result);

  char first[20];
  char second[20];
  printf("Enter first word\n");
  scanf("%s", first);
  printf("Enter second word\n");
  scanf("%s", second);
  concateChar(first, second);
  stringCompare(first, second);
  return 0;
}
