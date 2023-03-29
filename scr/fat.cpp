#include "fat.h"

int fatorialRecursivo(int n) {
  if (n > 1) {
    return n * fatorialRecursivo(n-1);
  } else {
    return 1;
  }
}

int fatorialIterativo(int n) {
  int fat;
  for (int i = n; n > 1; i--){
    fat *= i;
  }
  return fat;
}