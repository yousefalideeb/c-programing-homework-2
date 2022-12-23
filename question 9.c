#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int original_n = n;
    int sum = 0;
    int digits = log10(n) + 1;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    if (sum == original_n) {
        printf("%d is an Armstrong number.\n", original_n);
    } else {
        printf("%d is not an Armstrong number.\n", original_n);
    }

    return 0;
}
