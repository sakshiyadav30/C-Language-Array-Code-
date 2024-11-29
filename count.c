#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Sakshi Yadav\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
      
        if (arr[i] == -1) {
            continue; 
        }
     
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; 
                arr[j] = -1; 
                break;
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}