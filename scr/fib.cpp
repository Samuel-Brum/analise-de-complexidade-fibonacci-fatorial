#include "fib.h"

int fibonacciRecursivo(int n) {
  if (n == 1 || n == 0) {
    return n;
  } else {
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
  }
}

int fibonacciIterativo(int n) {
  int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i <= n; i++){
      fib[i] = fib[i-1] + fib[i-2];
    }
  return fib[n];
}