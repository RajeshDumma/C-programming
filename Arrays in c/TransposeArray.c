#include<stdio.h>

int main() {

    int row, col;

    printf("Enter the rows: ");
    scanf("%d", &row);
    printf("Enter the cols: ");
    scanf("%d", &col);

    int a[row][col], t[col][row];

    printf("Enter the matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose logic
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            t[i][j] = a[j][i];
        }
    }

    // print matrices
    printf("Transpose matrix is:\n");
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            printf("%d ", t[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
