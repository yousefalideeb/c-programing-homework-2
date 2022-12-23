#include <stdio.h>

int main() {
int i, sum = 0;

for (i = 1; i <= 50; i++) 
{
    sum += i;
}

printf("Sum of the first 50 natural numbers: %d\n", sum);

return 0;
}
