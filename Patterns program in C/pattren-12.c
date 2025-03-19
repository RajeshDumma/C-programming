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



------------------------------------------------------------------------------

 // rows

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
            printf("%d ",rows);
        }
        printf("\n");
    }

    return 0;
 }
----------------------------------------------------------

 // cols 


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
            printf("%d ",cols);
        }
        printf("\n");
    }

    return 0;
 }

--------------------------------------------------------------------

 // Albhabet

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
            printf("%c ",rows + 64);
        }
        printf("\n");
    }

    return 0;
 }
