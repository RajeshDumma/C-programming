/* #include <stdio.h>

int main(){

    int arr[1000] , n , position , value , i;

    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter %d Array values : ",n);

    for(i = 0 ; i < n; i++){
          scanf("%d",&arr[i]);
    }
  
    printf("Before insertion values: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
   printf("\nEnter which position you want to insert the value : ");
   scanf("%d",&position);
   printf("Enter the value : ");
   scanf("%d",&value);

   for(i = n ; i >= position ; i--){
    arr[i] = arr[i - 1];
   }
   n++;
   arr[position] = value;

   printf("After insertion values: ");

   for(i = 0 ; i< n; i++){
    printf("%d ",arr[i]);
   }

    return 0;
} */


#include <stdio.h>

int main() {

    int arr[1000], n, position, value, i;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d array values: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before insertion values: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the position to insert the value (1 to %d): ", n + 1);
    scanf("%d", &position);

    // Validate position
    if(position < 1 || position > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the value: ");
    scanf("%d", &value);

    position--; // convert to 0-indexed

    for(i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++;

    printf("After insertion values: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
