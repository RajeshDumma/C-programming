#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter the number of rows in first matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns in first matrix: ");
    scanf("%d", &c1);
    printf("Enter the number of rows in second matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns in second matrix: ");
    scanf("%d", &c2);

    if (c1 == r2) {
        int A[r1][c1], B[r2][c2], result[r1][c2];

        // Input first matrix
        printf("Enter the elements of the first matrix:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        // Input second matrix
        printf("Enter the elements of the second matrix:\n");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        // Initialize result matrix with 0
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                result[i][j] = 0;
            }
        }

        // Matrix multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    result[i][j] += A[i][k] * B[k][j];  
                }
            }
        }

        // Output result matrix
        printf("Multiplication of the two matrices is:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Multiplication is not possible.\nColumns of the first matrix must equal rows of the second matrix.\n");
    }

    return 0;
}
