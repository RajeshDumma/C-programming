#include <stdio.h>

int main() {
    int n, rows, cols, space;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (rows = 1; rows <= n; rows++) {
        // Print leading spaces
        for (space = 1; space <= n - rows; space++) {
            printf("  ");
        }
        // Print stars
        for (cols = 1; cols <= rows; cols++) {
        //    printf("*");//printing starts
      //  printf("%d ",rows); // printing rows
        printf("%d ",cols); // printing cols
        }
        printf("\n");
    }

    return 0;
}
