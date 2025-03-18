#include <stdio.h>

int main(){
  
   int n ;
   printf("Enter n value : ");
   scanf("%d",&n);

   for(int i = 1 ; i <= n ;i++){
       for(int j = 1 ; j <= n ; j++){
           printf("%d ",i); // it's print row wise 
         //  printf("%d ",j); //it's print column wise 
       }
       printf("\n");
   }

   return 0;
}