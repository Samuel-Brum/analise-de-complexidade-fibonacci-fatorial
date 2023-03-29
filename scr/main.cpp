#include <iostream>
#include "fib.h"
#include "fat.h"

#define FIB 40
#define FAT 20

int main (int argc, char **argv) {
  // TODO: implementar argc e argv para controlar chamada via makefile
  for (int i = 1; i <= 20; i++){
    std::cout << "Fib Recursivo: " << fibonacciRecursivo(i) << '\n'  
              << "Fib Iterativo: " << fibonacciIterativo(i) << '\n';
  }
  
  for (int i = 1; i <=20; i++) {
    std::cout << "Fat Recursivo: " << fatorialRecursivo(i) << '\n' 
              << "Fat Iterativo: " << fatorialIterativo(i) << '\n';
  }
  
  return 0;
}