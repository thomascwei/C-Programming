#include <stdio.h>

int main(int argc, char const *argv[])
{
  int numberOfArgc;
  enum gender
  {
    male,
    female
  };
  enum gender myGender = male;
  char myCharacter = 'K';
  printf("my gender=%d\n", myGender);
  printf("Gender=%c\n", myCharacter);

  numberOfArgc = argc;
  char *arg0 = argv[0];
  char *arg1 = argv[1];
  printf("Number of arguments:%i\n", numberOfArgc);
  printf("Arguments1: %s\n", arg0);
  printf("first entry is %s\n", arg1);

  return 0;
}
