#include <iostream>
#include "fib.h"
#include "fat.h"

int main (int argc, char *argv[]) {
  if (std::string(argv[1]) == "fib") {
    if (std::string(argv[2]) == "r") {
      std::cout << "Fibonacci Recursivo: " << fibonacciRecursivo(atoi(argv[3])) << '\n' << std::endl;
    }
    if (std::string(argv[2]) == "i") {
      std::cout << "Fibonacci Iterativo: " << fibonacciIterativo(atoi(argv[3])) << '\n' << std::endl;
    }
  }

  if (std::string(argv[1]) == "fat") {
    if (std::string(argv[2]) == "r") {
      std::cout << "Fatorial Recursivo: " << fatorialRecursivo(atoi(argv[3])) << '\n' << std::endl;
    }
    if (std::string(argv[2]) == "i") {
      std::cout << "Fatorial Iterativo: " << fatorialIterativo(atoi(argv[3])) << '\n' << std::endl;
    }
  }
  return 0;
}