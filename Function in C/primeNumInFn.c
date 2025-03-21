#include <stdio.h>
int checkPrime(int);  // Function prototype

int main() {
    int num;
    
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (checkPrime(num)) {
        printf("%d is a Prime Number.\n", num);
    } else {
        printf("%d is NOT a Prime Number.\n", num);
    }

    return 0;
}

// Function to check if a number is prime
int checkPrime(int a) {
    if (a < 2) return 0;  // Numbers less than 2 are not prime

    for (int i = 2; i * i <= a; i++) { //  condition: i * i <= a
        if (a % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}


// check upto n numbers 
