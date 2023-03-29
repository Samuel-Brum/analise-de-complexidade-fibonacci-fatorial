#include <iostream>
#include "fib.h"

int main (int argc, char *argv) {
  std::cout << 'Recursivo: ' << fibonacciRecursivo(10) << '\n' << 'Iterativo: '<< '\n' << fibonacciIterativo(10);
  return 0;
}