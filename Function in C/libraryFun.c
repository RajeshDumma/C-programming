#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    double square_root, power, abse, coscs;

    printf("Enter the number: ");
    scanf("%d", &n);

    square_root = sqrt(n);  // Square root calculation
    power = pow(n, 2);      // Raising to power 2
    abse = abs(n);          // Absolute value (for integers)
    coscs = cos(n);         // Cosine of the number

    printf("Square root of %d is %.2lf\n", n, square_root);
    printf("%d squared is %.2lf\n", n, power);
    printf("Absolute value of %d is %.2lf\n", n, abse);
    printf("Cosine of %d is %.2lf\n", n, coscs);

    return 0;
}
