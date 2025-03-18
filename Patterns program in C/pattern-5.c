#include <stdio.h>

int main(){
  
   int n ,rows , cols ;
   printf("Enter n value : ");
   scanf("%d",&n);

   for(rows = 1 ; rows <= n ;rows++){
       for(cols = 1 ; cols <= rows ; cols++){
           printf("%c ",rows + 64); // row wise
        //   printf("%c ",cols + 64); // column wise
       }
       printf("\n");
   }

   return 0;
}