#include <iostream>
#include "fat.h"

unsigned long long int fatorialRecursivo(unsigned long long int n) {
  if (n > 1) {
    return n * fatorialRecursivo(n-1);
  } else {
    return 1;
  }
}

unsigned long long int fatorialIterativo(unsigned long long int n) {
  std::cout << "entrou" << std::endl;
  unsigned long long int fat = 1;
  for (unsigned long long int i = 1; i <= n; i++){
    fat *= i;
  }
  return fat;
}