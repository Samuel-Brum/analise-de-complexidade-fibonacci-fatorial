#include "fib.h"

unsigned long long int fibonacciRecursivo(unsigned long long int n) {
  if (n == 1 || n == 0) {
    return n;
  } else {
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
  }
}

unsigned long long int fibonacciIterativo(unsigned long long int n) {
  unsigned long long int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(unsigned long long int i = 2; i <= n; i++){
      fib[i] = fib[i-1] + fib[i-2];
    }
  return fib[n];
}