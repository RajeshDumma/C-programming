#include<stdio.h>

int main(){

    int arr[1000] , size , max, secondMax;
    printf("Enter the size : ");
    scanf("%d",&size);

    printf("Enter %d elements : ",size);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    // finding largest number in an Array :
      if(arr[0] > arr[1]){
        max = arr[0];
        secondMax = arr[1];
      } else{
        max = arr[1];
        secondMax = arr[0];
      }

      for(int i = 2; i < size ; i++){
        if(arr[i] > max){
            secondMax = max;
            max = arr[i];
        }
         else if(arr[i] > secondMax){
            secondMax = arr[i];
        }
      }

      printf("second largest number an array is %d : ", secondMax);
    return 0;
}