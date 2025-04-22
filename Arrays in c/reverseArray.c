#include <stdio.h>
#define SIZE 5

int main(){

    int arr[SIZE];
      printf("ENter %d elements :",SIZE);
    for(int i = 0; i< SIZE ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array in reverse order: ");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}


// printing array values in reverse order
#include <stdio.h>

int main(){

    int n ;
    printf("Enter Array size : ");
    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Array in reverse order: ");
    for(int  i = n -1 ; i >= 0; i--){
        printf("%d ", a[i]);
    }
    return 0 ;
}


// 3rd method
#include <stdio.h>

int main(){
  int n;
  printf("Enter Array size : ");
  scanf("%d",&n);
  int arr[n];
  int left =0 , right = n - 1,temp;
  for(int i = 0 ; i < n ; i++){
    scanf("%d ",&arr[i]);
  }
  while(left < right){
    temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    left++;
    right--;
  }
  printf("Array in reverse order: ");
  for(int i = 0 ; i<n ; i++){
   printf("%d ",arr[i]);
  }

    return 0;
}

// Another method

#include<stdio.h>

int main(){
   int n;
   printf("Enter an array size : ");
   scanf("%d",&n);

   int arrA[n];
   int arrB[n];
   for(int i=0 ; i < n ; i++){
    scanf("%d",&arrA[i]);
   }

   for(int i=0; i< n ; i++){
    arrB[i] = arrA[n-i-1];
   }
   /* for(int i=0; i< n ; i++){
    arrA[i] = arrB[i];
   } */
   printf("Array in reverse order: ");
   for(int i =0 ;i < n ; i++){
 //   printf("%d " , arrA[i]);
    printf("%d " , arrB[i]);
   }
    return 0;
}