#include <stdio.h>

int main() {
    int n;
    printf("Sakshi Yadav\n");
    printf("Enter the number of elements in each array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], merged[2 * n];

    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n; i++) {
        merged[i] = arr1[i];
        merged[n + i] = arr2[i];
    }
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - i - 1; j++) {
            if (merged[j] < merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
    printf("Merged array in descending order:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}