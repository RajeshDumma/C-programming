/* #include<stdio.h>


int main(){
   
    int a[5] = {10 , 20 , 30 , 40 , 50};

    for(int i = 0; i < 5 ; i++){
        printf(" index %d is : %d \n",i , a[i]);
    }
  //  printf("Size of a: %lu\n", sizeof(a));
    // total sum of arrays
      int total = 0;
    for(int i = 0 ; i < 5; i++){
        total += a[i];
    }
    printf("\n total is : %d" , total);

    return 0;
} */

 // array using scanf function
#include <stdio.h>

#define SIZE 8 


int main(){

    int n[SIZE];
    printf("Enter %d elements : ",SIZE);
    for(int i = 0 ; i < SIZE ; i++){
        scanf("%d",&n[i]);
    }
    int total = 0;
    for(int i = 0 ; i < SIZE ; i++){
        total += n[i];
    }
    printf("\n total of array elements is : %d",total);

    return 0;
}