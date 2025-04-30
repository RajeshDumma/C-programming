#include <stdio.h>

int main() {
    int size, i, search;

    // Take the size of the array
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    // Take array elements input
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Take the number to be searched
    printf("Enter the number to search: ");
    scanf("%d", &search);

    // Perform linear search
    for (i = 0; i < size; i++) {
        if (arr[i] == search) {
            printf("Element found at index %d.\n", i);
            break;
        }
    }

    // If element is not found
    if (i == size) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
