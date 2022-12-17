#include <stdio.h>

int main(int argc, char const *argv[])
{
  float rawData[5][12] = {
      {1.0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
      {1.0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
      {1.0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
      {1.0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
      {1.0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}};
  // rawData[0] = {1.0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  // rawData[0][0] = 1.1;
  float yearlyTotalRainFall[5] = {0};
  float rainFallTotal = 0;
  float monthlyTotalRainFall[12] = {0};
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      // printf("%.2f ", rawData[i][j]);
      yearlyTotalRainFall[i] += rawData[i][j];
      rainFallTotal += rawData[i][j];
      monthlyTotalRainFall[j] += rawData[i][j];
    }
    // printf("\n");
  }

  int year = 2010;
  printf("YEAR  RAINFALL\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d  %.2f\n", year + i, yearlyTotalRainFall[i]);
  }
  printf("\n");
  printf("The yearly average is %.2f\n", rainFallTotal / 5);
  printf("\n");
  printf("MONTHLY AVERAGE:\n");
  printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
  for (int i = 0; i < 12; i++)
  {
    printf("%.2f\t", monthlyTotalRainFall[i] / 5);
  }
  printf("\n");

  return 0;
}
