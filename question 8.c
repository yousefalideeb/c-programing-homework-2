#include <stdio.h>
#include <stdbool.h>

int main() {
int n;
printf("Enter a positive integer: ");
scanf("%d", &n);

int i,j,sum = 0;
    for (i = 2; i <= n; i++) {
        bool is_prime = true;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            sum += i;
        }
    }

printf("The sum of all prime numbers between 1 and %d is %d.\n", n, sum);

return 0;
}
