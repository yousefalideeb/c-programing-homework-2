#include <stdio.h>

int main(void) {
int n, i;
long long sum = 0;

printf("Enter the number of terms: ");
scanf("%d", &n);

for (i = 1; i <= n; i++)
{
    sum += (long long) (i * 1111);
}

printf("Sum: %lld\n", sum);

return 0;
}

