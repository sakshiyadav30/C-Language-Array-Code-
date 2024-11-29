#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool isIdentity = true;
    printf("Sakshi Yadav\n");
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = false;
                break;
            }
            if (i != j && matrix[i][j] != 0) {
                isIdentity = false;
                break;
            }
        }
        if (!isIdentity) {
            break;
        }
    }
    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }


    return 0;
}