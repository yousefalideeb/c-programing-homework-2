#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter a value for x: ");
    scanf("%lf", &x);

    double sum = 1.0;
    double term = 1.0;
    int i = 1;
    while (fabs(term) > 1e-6) {
        term = term * x / (i + 1);
        sum += term;
        i++;
    }

    printf("Sum of the series: %f\n", sum);

    return 0;
}

