#include <stdio.h>

int main() {
    int n, rows, cols, space ,colsLimit;

    printf("Enter n value: ");
    scanf("%d", &n);
    
    for (rows = 1; rows <= n; rows++) {
        for (cols = 1; cols <= n; cols++) {
            if(cols == 1 || cols == n || rows == 1 || rows == n )
            printf("* ");
             else 
                printf("  ");
        } 
        printf("\n");
    }
return 0;
}

// output :- 

* * * * *
*       *
*       *
*       *
* * * * *
