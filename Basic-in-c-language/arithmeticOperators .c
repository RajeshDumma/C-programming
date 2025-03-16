#include <stdio.h>

int main() {
    int a, b;

    // Taking input
    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);

    // Performing arithmetic operations
    printf("Sum of a and b is: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction of a and b is: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication of a and b is: %d * %d = %d\n", a, b, a * b);
    printf("Division of a and b is: %d / %d = %d\n", a, b, a / b);
    printf("Modulo of a and b is: %d %% %d = %d\n", a, b, a % b);

    return 0;
}
