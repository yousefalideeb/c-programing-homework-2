#include <stdio.h>

int main() {
int i, base = 2, exponent = 4, result = 1;

for (i = 0; i < exponent; i++)
{
    result *= base;
}

printf("2^4 = %d\n", result);

return 0;
}
