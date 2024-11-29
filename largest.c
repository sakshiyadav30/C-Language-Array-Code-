#include <stdio.h>

int main() {
    int n;
    printf("Sakshi Yadav\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements to find the second largest.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], second_largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;  
            largest = arr[i];          
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];  
        }
    }

    printf("The second largest element is: %d\n", second_largest);

    return 0;
}