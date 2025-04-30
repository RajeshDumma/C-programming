/* #include<stdio.h>

int main(){

int arr[1000] , n , position , i;

printf("Enetr array size : ");
scanf("%d",&n);

printf("Enter %d array elements : " , n);

for(i = 0; i < n ; i++){
    scanf("%d",&arr[i]);
}
printf("Before delete number ");
for(i = 0 ; i < n ; i++){
    printf("%d ",arr[i]);
}

printf("\nEnter the Which position you want to delete : ");
scanf("%d",&position);

for(i = position ; i< n ; i++){
    arr[i - 1] = arr[i];
}
n--;
printf("After delete number ");
for(i = 0 ; i < n ; i++){
    printf("%d ",arr[i]);
}

    return 0;
} */


// 2nd method , (position validate)

#include <stdio.h>

int main() {

    int arr[1000], n, position, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d array elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before delete: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the position you want to delete (1 to %d): ", n);
    scanf("%d", &position);

    // Validate position
    if(position < 1 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Convert to 0-based index
    position--;

    for(i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease array size after deletion

    printf("After delete: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
