#include <stdio.h>
#include <stdbool.h>

int main() {
int n,i,j;
printf("Enter a positive integer: ");
scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        bool is_prime = true;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            printf("%d is a prime number\n", i);
        }
    }

    return 0;
}
