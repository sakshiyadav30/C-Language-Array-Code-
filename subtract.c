#include <stdio.h>

int main() {
    int rows, columns;
    printf("Sakshi Yadav\n");
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &columns);

    int matrix1[rows][columns], matrix2[rows][columns], difference[rows][columns];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("The difference of the two matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}