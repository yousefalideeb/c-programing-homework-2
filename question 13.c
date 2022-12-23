#include <stdio.h>

int factorial(int n) {
    int i,result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }

    return 0;
}

