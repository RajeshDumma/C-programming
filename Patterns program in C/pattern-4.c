#include <stdio.h>

int main(){
  
   int n ,rows , cols , count = 1 ;
   printf("Enter n value : ");
   scanf("%d",&n);

   for(rows = 1 ; rows <= n ;rows++){
       for(cols = 1 ; cols <= rows ; cols++){
           printf("%d ",count++);
         //  count++;
       }
       printf("\n");
   }

   return 0;
}

// another method 
#include <stdio.h>

int main() {
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (int rows = 1; rows <= n; rows++) {
        int num = (rows * (rows - 1)) / 2 + 1;  // Calculate the first number in the row
        for (int cols = 1; cols <= rows; cols++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
