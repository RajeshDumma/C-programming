#include <stdio.h>

int main() {
    int n, rows, cols, space ,colsLimit;

    printf("Enter n value: ");
    scanf("%d", &n);
    
    for (rows = 1; rows <= n; rows++) {
        for (space = 1; space <= n - rows; space++) {
            printf(" ");
            
        }
        colsLimit = 2 * rows -1 ;
        for (cols = 1; cols <= colsLimit; cols++) {
            if(cols == 1 || cols == colsLimit || rows == n ){
            printf("*");
            } else {
                printf(" ");
            }
        } 
        printf("\n");
    }
return 0;
}