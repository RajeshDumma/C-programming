#include<stdio.h>


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
}