#include <stdio.h>

 int main(){
   
    int n , rows , cols , space;
    printf("Enter n value : ");
    scanf("%d",&n);

    for(rows = 1 ;rows <= n ;rows++){
        for(cols = 1 ;cols <= rows ;cols++){
            printf("* ");
        }
        printf("\n");
    }
    for(rows = n-1 ; rows >= 1;rows--){
        for(cols = 1; cols <= rows; cols++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
 }