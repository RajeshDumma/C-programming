#include <stdio.h>

int main() {
    int n, rows, cols, space;

    printf("Enter n value: ");
    scanf("%d", &n);

    // Upper part (increasing stars)
    for (rows = 1; rows <= n; rows++) {
        for (space = 1; space <= rows ; space++) {
            printf(" ");
        }
        for (cols = 1; cols <= n - rows + 1; cols++) {
            printf("* ");
        }
        printf("\n");
    }
    for (rows = 1; rows < n; rows++) {
        for (space = 1; space <= n - rows ; space++) {
            printf(" ");
        }
        for (cols = 1; cols <=  rows+1; cols++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0
} 
 
// output :
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 

// same method for numbers

#include <stdio.h>

int main() {
    int n, rows, cols, space;

    printf("Enter n value: ");
    scanf("%d", &n);

    // Upper part (increasing stars)
    for (rows = 1; rows <= n; rows++) {
        for (space = 1; space <= rows ; space++) {
            printf(" ");
        }
        for (cols = 1; cols <= n - rows + 1; cols++) {
            printf("%d ",cols+rows-1);
        }
        printf("\n");
    }
    for (rows = 1; rows < n; rows++) {
        for (space = 1; space <= n - rows ; space++) {
            printf(" ");
        }
        for (cols = 1; cols <=  rows+1; cols++) {
            printf("%d ",cols-rows+ n-1);
        }
        printf("\n");
    }

    return 0;
} 
 







// output:-

 1 2 3 4 5 
  2 3 4 5 
   3 4 5 
    4 5 
     5 
    4 5 
   3 4 5 
  2 3 4 5 
 1 2 3 4 5 



