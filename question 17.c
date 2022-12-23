#include <stdio.h>

int main() {
    int i,n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double sum = 0.0;
    printf("Harmonic series:\n");
    for (i = 1; i <= n; i++) {
        double term = 1.0 / i;
        sum += term;
        printf("%f ", term);
    }
    printf("\nSum of the series: %f\n", sum);

    return 0;
}

