#include <iostream>
#include "fib.h"
#include "fat.h"

int main (int argc, char *argv[]) {
  if (std::string(argv[1]) == "fib") {
    if (std::string(argv[2]) == "r") {
      std::cout << "Fib Recursivo: " << fibonacciRecursivo(atoi(argv[3])) << '\n' << std::endl;
    }
    if (std::string(argv[2]) == "i") {
      std::cout << "Fib Iterativo: " << fibonacciIterativo(atoi(argv[3])) << '\n' << std::endl;
    }
  }

  if (std::string(argv[1]) == "fat") {
    if (std::string(argv[2]) == "r") {
      std::cout << "Fat Recursivo: " << fatorialRecursivo(atoi(argv[3])) << '\n' << std::endl;
    }
    if (std::string(argv[2]) == "i") {
      std::cout << "Fat Iterativo: " << fatorialIterativo(atoi(argv[3])) << '\n' << std::endl;
    }
  }
  return 0;
}