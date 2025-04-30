#include <stdio.h>

int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], i, j, count = 0;

    printf("Enter %d array elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Array 1 is: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }

    // Remove duplicates
    for(i = 0; i < size; i++) {
        for(j = 0; j < count; j++) {
            if(arr1[i] == arr2[j]) {
                break;
            }
        }
        if(j == count) { 
            arr2[count] = arr1[i];
            count++;
        }
    }

    printf("\nArray 2 (unique elements) is: ");
    for(i = 0; i < count; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
