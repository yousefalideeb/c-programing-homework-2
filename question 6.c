#include <stdio.h>

int main() {
int a, b;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);

if (a < b) {
    int temp = a;
    a = b;
    b = temp;
}

int lcm = a;
    while (lcm % b != 0) {
        lcm += a;
}

printf("The LCM of %d and %d is %d.\n", a, b, lcm);

return 0;
}
