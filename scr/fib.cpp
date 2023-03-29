#include "fib.h"
#include <iostream>

long long int fibonacciRecursivo(long long int n) {
  std::cout << "Camada" << n << '\n';
  if (n == 1 || n == 0) {
    return n;
  } else {
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
  }
}

long long int fibonacciIterativo(long long int n) {
  std::cout << "Camada" << n << '\n';
  long long int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(long long int i = 2; i <= n; i++){
      fib[i] = fib[i-1] + fib[i-2];
    }
  return fib[n];
}