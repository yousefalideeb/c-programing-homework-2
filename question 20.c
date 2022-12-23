#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter a value for x: ");
    scanf("%lf", &x);

    double sum = 0.0;
    double term = 1.0;
    int i = 0;
    while (fabs(term) > 1e-6) {
        term = term * x * x / ((i + 1) * (i + 2));
        sum += term;
        i += 2;
    }

    printf("Sum of the series: %f\n", sum);

    return 0;
}

