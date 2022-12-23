#include <stdio.h>

int main(void) {
  int n, i, j;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d ", binomialCoeff(i, j));
    }
    printf("\n");
  }

  return 0;
}

int binomialCoeff(int n, int k) {
  int i, res = 1;

  if (k > n - k) {
    k = n - k;
  }

  for (i = 0; i < k; ++i) {
    res *= (n - i);
    res /= (i + 1);
  }

  return res;
}

