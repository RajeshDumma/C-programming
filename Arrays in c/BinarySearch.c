#include <stdio.h>

int main(){

int n;
printf("Enter the array size : ");
scanf("%d",&n);

int arr[n] , left = 0, right = n - 1, mid , i , search , found = 0;

printf("Enter the %d array elements : " , n);

for(i = 0 ; i < n ;i++){
    scanf("%d",&arr[i]);
}

printf("Enter which element you want to search : \n");
scanf("%d",&search);

while(left <= right){

    mid = (left + right) / 2 ;
    if(search == arr[mid]){
        printf("Found at index %d\n", mid);
        found = 1;
        break ;
    }
    else if(search < arr[mid]){
        right = mid - 1;
    }
    else if(search > arr[mid]){
        left = mid + 1;
    }
}
   if(found == 0){
    printf("Element not found ");
   }

    return 0;
}