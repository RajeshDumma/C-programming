#include <stdio.h>

 int main(){
   
    int n , rows , cols , space;
    printf("Enter n value : ");
    scanf("%d",&n);

    for(rows = 1 ;rows <= n ;rows++){
       for(space = 1; space <= rows-1 ; space++){
        printf(" ");
       }
        for(cols = 1 ;cols <= n - rows + 1 ;cols++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
 }