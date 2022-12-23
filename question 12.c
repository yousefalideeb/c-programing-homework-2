#include <stdio.h>

int main() {
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d:\n", n);
    for (i = 2; i <= n; i++) {
        int j,sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
