#include <stdio.h>

int main(){
  
   int n ,rows , cols ; //count = 1 ;
   printf("Enter n value : ");
   scanf("%d",&n);

   for(rows = 1 ; rows <= n ;rows++){
       for(cols = 1 ; cols <= n - rows + 1 ; cols++){
        //   printf("%d ",count++); // row wise
         printf("%c ",cols + 64);
       }
       printf("\n");
   }

   return 0;
}