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

#include <stdio.h>

int checkPrime(int a);  // Function prototype

int main() {
    int num;
    
    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers up to %d are: ", num);
    for (int i = 2; i <= num; i++) {
        if (checkPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

// Function to check if a number is prime
int checkPrime(int a) {
    if (a < 2) return 0;  // Numbers less than 2 are not prime

    for (int j = 2; j * j <= a; j++) { // Optimized check up to sqrt(a)
        if (a % j == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}


// n prime numbers 
// ex:-  5 , ==>  2 , 3 , 5 , 7 ,11
