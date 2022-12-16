#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tries 5

int main(int argc, char const *argv[]) {
  int tryRemain = tries;
  srand(time(NULL));

  printf("This is a guessing game.\n");
  printf("I have chosen a number between 0 and 20 which you must guess.\n\n");
  printf("You have 5 tries left.\n");
  int guess;
  int answer = rand() % 21;
  // printf("answer: %d\n", answer);
  while (tryRemain > 0) {
    {
      printf("Enter a guess: ");
      scanf("%d", &guess);
      if (guess == answer) {
        printf("Congratulations. You did it.\n");
        break;
      }
      if (guess > answer) {
        printf("Sorry. %d is wrong. Answer is less than that.\n", guess);
      } else {
        printf("Sorry. %d is wrong. Answer is bigger than that.\n", guess);
      }
      tryRemain--;
      if (tryRemain > 0) {
        printf("You have %d tries left.\n", tryRemain);
      } else {
        printf("You lose! The answer is %d\n", answer);
        break;
      }
    }
  }

  return 0;
}