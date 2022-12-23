#include <stdio.h>

int main(void) {
  int i, count = 0, sum = 0;

  for (i = 100; i <= 200; i++) {
    if (i % 9 == 0) { 
      count++; 
      sum += i; 
    }
  }

  printf("Number of integers between 100 and 200 divisible by 9: %d\n", count);
  printf("Sum of these integers: %d\n", sum);

  return 0;
}

