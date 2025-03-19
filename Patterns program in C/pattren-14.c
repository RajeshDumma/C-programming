#include <stdio.h>

int main() {
    int n, rows, cols, space;

    printf("Enter n value: ");
    scanf("%d", &n);

    // Upper part (increasing stars)
    for (rows = 1; rows <= n; rows++) {
        for (space = 1; space <= n - rows; space++) {
            printf(" ");
        }
        for (cols = 1; cols <= rows; cols++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part (decreasing stars)
    for (rows = 1; rows < n; rows++) {
        for (space = 1; space <= rows; space++) {
            printf(" ");
        }
        for (cols = 1; cols <= n - rows; cols++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


// another method with in 3 for loops 

#include <stdio.h>

int main() {
    int n, rows, cols, space ,stars;

    printf("Enter n value: ");
    scanf("%d", &n);

    // Single loop for both increasing and decreasing stars
    for (rows = 1; rows <= 2 * n - 1; rows++) {
         stars = (rows <= n) ? rows : (2 * n - rows); // Control star count
        // Printing spaces
        for (space = 1; space <= n - stars; space++) {
            printf(" ");
        }
        // Printing stars
        for (cols = 1; cols <= stars; cols++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

