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
