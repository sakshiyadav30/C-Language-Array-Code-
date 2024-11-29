#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Sakshi Yadav\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}