#include <stdio.h>
int main() {
    int n, sum = 0;
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
        sum += matrix[i][n - 1 - i];  
    }
    printf("The sum of the right diagonal elements is: %d\n", sum);

    return 0;
}