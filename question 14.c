#include <stdio.h>

int factorial(int n) {
    int i,result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d:\n", n);
    for (i = 1; i <= n; i++) {
        int sum = 0;
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}

