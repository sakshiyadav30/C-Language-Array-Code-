#include <stdio.h>
int main() {
    int n;
    printf("Sakshi Yadav\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int source[n], destination[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &source[i]);
    }
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
    printf("Elements in the destination array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");
    return 0;
}