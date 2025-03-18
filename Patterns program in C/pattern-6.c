#include <stdio.h>

int main(){
  
   int n ,rows , cols ;
   printf("Enter n value : ");
   scanf("%d",&n);

   for(rows = 1 ; rows <= n ;rows++){
       for(cols = 1 ; cols <= n - rows + 1 ; cols++){
         //  printf("%d ",rows); // row wise
          printf("%c ",cols+64); // column wise
       }
       printf("\n");
   }

   return 0;
}