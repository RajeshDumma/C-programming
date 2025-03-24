#include <stdio.h>

int fact(int); // Function prototype

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num); 

    result = fact(num); 
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

int fact(int n) {
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}
