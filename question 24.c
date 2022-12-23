#include <stdio.h>

int main(void) {
  int binary, decimal = 0, base = 1;

  printf("Enter a binary number: ");
  scanf("%d", &binary);

  while (binary > 0) {
    int digit = binary % 10;
    if (digit != 0 && digit != 1) {
      printf("Error: Invalid binary number.\n");
      return 1;
    }
    decimal += digit * base;
    base *= 2;
    binary /= 10;
  }

printf("Decimal equivalent: %d\n", decimal);

return 0;
}

