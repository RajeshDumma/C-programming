#include <stdio.h>

int main() {
    int a, b;

    // Initial values
    a = 10, b = 20;
    printf("Before swap:\n");
    printf("a = %d & b = %d\n", a, b);

    // Swap using subtraction and addition
    a = 10, b = 20;  // Reset values
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swap (without temp variable):\n");
    printf("a = %d & b = %d\n", a, b);

    // Using a temp variable
    a = 10, b = 20;  // Reset values
    int temp = a;
    a = b;
    b = temp;
    printf("\nUsing temp variable to swap:\n");
    printf("a = %d & b = %d\n", a, b);

    // Using multiplication and division (avoid if numbers are large)
    a = 10, b = 20;  // Reset values
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\nUsing multiplication and division:\n");
    printf("a = %d & b = %d\n", a, b);

    // Using XOR bitwise operation
    a = 10, b = 20;  // Reset values
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nUsing XOR swap:\n");
    printf("a = %d & b = %d\n", a, b);

    return 0;
}
