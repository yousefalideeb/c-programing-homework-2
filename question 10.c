#include <stdio.h>
#include <math.h>

int main() {
    int n,i=1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int original_i = i;
        int sum = 0;
        int digits = log10(i) + 1;
        while (i > 0) {
            int digit = i % 10;
            sum += pow(digit, digits);
            i /= 10;
        }

        if (sum == original_i) {
            printf("%d is an Armstrong number.\n", original_i);
        }
    }

    return 0;
}

