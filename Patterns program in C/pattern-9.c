
 #include <stdio.h>

 int main(){
   
    int n , rows , cols , space;
    printf("Enter n value : ");
    scanf("%d",&n);

    for(rows = 1 ;rows <= n ;rows++){
       for(space = 1; space <= n - rows ; space++){
        printf("  ");
       }
        for(cols = 1 ;cols <= rows ;cols++){
            printf("%d ",n-cols + 1);
        }
        printf("\n");
    }

    return 0;
 }
==========================================================================================

 for Albhabet code

#include <stdio.h>

 int main(){
   
    int n , rows , cols , space;
    printf("Enter n value : ");
    scanf("%d",&n);

    for(rows = 1 ;rows <= n ;rows++){
       for(space = 1; space <= n - rows ; space++){
        printf("  ");
       }
        for(cols = 1 ;cols <= rows ;cols++){
            printf("%c ",rows + 64);
        }
        printf("\n");
    }

    return 0;
 }
