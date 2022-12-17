#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  int primeArray[50] = {0};
  primeArray[0] = 2;
  primeArray[1] = 3;
  // 用來添加prime的index
  int primeIndex = 2;
  // 忽略偶數
  for (int candidate = 5; candidate <= 100; candidate = candidate + 2)
  {
    bool isPrime = true;

    // inner loop , 將每個prime拿出來當除數，若被除數無法被所有已知prime整除代表為新除數，需加入primes
    for (int j = 0; j < 50; j++)
    {
      if (primeArray[j] > 0)
      {
        // 被prime整除代表不是prime,跳出離開
        if (candidate % primeArray[j] == 0)
        {
          isPrime = false;
          break;
        }
      }
      //
    }
    if (isPrime)
    {
      primeArray[primeIndex] = candidate;
      primeIndex++;
    }
  }

  printf("primes include:\n");
  for (int i = 0; i < 50; i++)
  {
    if (primeArray[i] > 0)
    {
      printf(" %d ", primeArray[i]);
    }
  }
  printf("\n");
  return 0;
}
