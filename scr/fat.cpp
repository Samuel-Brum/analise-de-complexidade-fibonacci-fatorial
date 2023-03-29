#include "fat.h"

long long int fatorialRecursivo(long long int n) {
  if (n > 1) {
    return n * fatorialRecursivo(n-1);
  } else {
    return 1;
  }
}

long long int fatorialIterativo(long long int n) {
  long long int fat = 1;
  for (long long int i = 1; i <= n; i++){
    fat *= i;
  }
  return fat;
}