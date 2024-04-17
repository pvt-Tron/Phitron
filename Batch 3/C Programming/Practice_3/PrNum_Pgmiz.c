#include <stdio.h>

// function to check prime number (Programiz [PRO])
int checkPrime(int number) {
  for (int i = 2; i < number; ++i) {
    if (number % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {

  // iterating from 50 to 100
  for (int i = 50; i <= 100; ++i) {
    int isPrime = checkPrime(i);

    // print if i is prime
    if (isPrime) {
      printf("Programiz \"PrNum\": %d\n", i);
    }
  }

  return 0;
}