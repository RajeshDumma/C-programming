#include <stdio.h>

int main() {
    int n, rows, cols, space, colsLimit;

    printf("Enter n value: ");
    scanf("%d", &n);

    // Upper half of the diamond
    for (rows = 1; rows <= n; rows++) {
        for (space = 1; space <= n - rows; space++) {
            printf(" ");
        }
        colsLimit = 2 * rows - 1;
        for (cols = 1; cols <= colsLimit; cols++) {
            if (cols == 1 || cols == colsLimit) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (rows = n - 1; rows >= 1; rows--) {
        for (space = 1; space <= n - rows; space++) {
            printf(" ");
        }
        colsLimit = 2 * rows - 1;
        for (cols = 1; cols <= colsLimit; cols++) {
            if (cols == 1 || cols == colsLimit) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
