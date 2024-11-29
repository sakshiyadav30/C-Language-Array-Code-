#include <stdio.h>
int main() {
    int n, value, i, position;
    printf("Sakshi Yadav\n");
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; 

    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    position = n; 
    for (i = 0; i < n; i++) {
        if (arr[i] > value) {
            position = i;
            break;
        }
    }

    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++; 

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}