#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("plz enter minutes in integer\n");
  int minutes;
  scanf("%d", &minutes);
  double years, days;
  years = (double)minutes / (365 * 24 * 60);
  days = minutes / (24.0 * 60);
  printf("u enter %d minutes.\nIt equals to %f years or %f days\n", minutes,
         years, days);
  return 0;
}
