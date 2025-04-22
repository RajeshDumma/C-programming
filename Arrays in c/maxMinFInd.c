#include<stdio.h>
int main(){
int arrSize ;
printf("Enter the array Size :");
scanf("%d",&arrSize);

int arr[arrSize] , max , min;
for(int i = 0; i< arrSize ; i++){
    scanf("%d",&arr[i]);
}
  max = arr[0];
  min = arr[0];

  for(int i = 1 ; i < arrSize ; i++){
    if(arr[i] > max)
    max = arr[i];
    
    if(arr[i] < min)
    min = arr[i];
  }

  printf("Maximum value = %d\n",max);
  printf("Maximum value = %d\n",min);

    return 0;
}