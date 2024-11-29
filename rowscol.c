#include <stdio.h>
int main() {
    int rows, columns;
    printf("Sakshi Yadav\n");
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);
    int matrix[rows][columns];
    int rowSum[rows], colSum[columns];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }
    for (int j = 0; j < columns; j++) {
        colSum[j] = 0;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    printf("Sum of each column:\n");
    for (int j = 0; j < columns; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}