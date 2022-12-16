#include <math.h>
#include <stdio.h>

#define basicPay 12.00
#define overtimePay 18.00
#define firstTaxRate 0.15
#define secondTaxRate 0.2
#define restTaxRate 0.25
#define basicHour 40

int main(int argc, char const *argv[]) {
  int totalHours;
  printf("plz enter work hour\n");
  scanf("%d", &totalHours);
  printf("total work hours: %d\n", totalHours);
  // calculate gross pay
  float grossPay;
  if (totalHours <= basicHour) {
    grossPay = basicPay * totalHours;
  } else {
    grossPay =
        (basicPay * basicHour) + (overtimePay * (totalHours - basicHour));
  }
  printf("gross pay: %.2f\n", grossPay);

  // calculate taxes
  float taxes;
  if (grossPay <= 300) {
    taxes = grossPay * firstTaxRate;
  } else if (grossPay <= 450) {
    taxes = 300 * firstTaxRate;
    taxes += (grossPay - 300) * secondTaxRate;
  } else {
    taxes = (300 * firstTaxRate) + (150 * secondTaxRate);
    taxes += (grossPay - 450) * restTaxRate;
  }
  printf("taxes: %.2f\n", taxes);
  printf("net pay: %.2f\n", grossPay - taxes);
  return 0;
}