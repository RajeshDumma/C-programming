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

---------------------------------------------------------------------

    #include <stdio.h>

int fact(int); // Function declaration

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = fact(num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}

int fact(int n) {
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}
