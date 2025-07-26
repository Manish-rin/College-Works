#include <stdio.h>
int main() {
    int row, col, row_max, col_max;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns for matrix: ");
    scanf("%d", &col);
    int x[row][col];

    // Building matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter the value of x[%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
        printf("\n");
    }

    // Printing matrix
    printf("The matrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    // Finding largest element row-wise
    for (int i = 0; i < row; i++) {
        row_max = x[i][0];
        for (int j = 1; j < col; j++) {
            if (x[i][j] > row_max) {
                row_max = x[i][j];
            }
        }
        printf("The largest element in row %d is %d\n", i, row_max);
    }

    // Finding largest element column-wise
    for (int j = 0; j < col; j++) {
        col_max = x[0][j];
        for (int i = 0; i < row; i++) {
            if (x[i][j] > col_max) {
                col_max = x[i][j];
            }
        }
        printf("The largest element in column %d is %d\n", j, col_max);
    }

    return 0;
}
