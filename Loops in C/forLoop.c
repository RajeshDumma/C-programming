// For loop in c

/* 
Initialization (loop starting value)
condition (loop ending value)
Update (Increment / Decrement) i++ or i--
*/

// demonstrate for loop 


#include <stdio.h>

int main(){
  
     int num ;
     printf("Enter a number : ");
     scanf("%d",&num);

  // print 1 to 5
     for(int i =1 ; i <= num ; i++){
        printf("%d ",i);
     }
  printf("\n") ;
 // reverse 5 to 1
      for(int i = num ; i >= 1; i--){
        printf("%d ",i);
      }
      printf("\n") ;
      // sum of N numbers
           int sum = 0;
      for(int i = 1; i <= num ; i++){
          sum += i;
      }
      printf(" sum of N numbers : %d ",sum); 
      printf("\n") ;

      // even numbers 
      for(int i = num ; i >= 1; i--){
        printf("%d ",i * 2);
      }
      printf("\n") ;
      // odd numbers 
      for(int i =1 ; i <= num ; i++){
        printf("%d ",(i * 2 - 1));
     }
     printf("\n") ;
     // sum of n even numbers
     for(int i =1 ; i <= num ; i++){
        sum =sum + i * 2 ;
     }
     printf(" sum of N numbers : %d ",sum);
     printf("\n") ;
      // sum of n odd numbers
      for(int i =1 ; i <= num ; i++){
        sum =sum + (i * 2 - 1);
     }
     printf(" sum of N odd numbers : %d ",sum);
    return 0;
}