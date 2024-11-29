#include <stdio.h>

int main() {
    int n, value, position;

    printf("Sakshi Yadav\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);
    printf("Enter the position to insert the value (1 to %d): ", n + 1);
    scanf("%d", &position);


    position--;

    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++; 
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}