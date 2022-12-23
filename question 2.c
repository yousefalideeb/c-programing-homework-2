#include <stdio.h>
#include <math.h>

int main()
{
double a, b, c;
double root1, root2;

printf("Enter the values of a, b, and c: ");
scanf("%lf%lf%lf", &a, &b, &c);

double discriminant = b * b - 4 * a * c;

  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Root 1: %lf\n", root1);
    printf("Root 2: %lf\n", root2);
     }
  else if (discriminant == 0) {
    root1 = root2 = -b / (2 * a);
    printf("Root: %lf\n", root1);
  }
  else {
    double realPart = -b / (2 * a);
    double imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("Root 1: %lf + %lfi\n", realPart, imaginaryPart);
    printf("Root 2: %lf - %lfi\n", realPart, imaginaryPart);
  }
}


