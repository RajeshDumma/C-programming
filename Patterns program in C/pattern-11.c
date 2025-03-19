#include <stdio.h>

int main(){


    int n , rows , cols , space ;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(rows = 1; rows <= n; rows++){
        for(space = 1; space <= n - rows; space++){
       printf(" ");
        } 
        for(cols = 1 ; cols <= rows ; cols++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} 
    
// output :
    * 
   * * 
  * * * 
 * * * * 
* * * * *
===============================================================================================================

// rows 

#include <stdio.h>

int main(){


    int n , rows , cols , space ;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(rows = 1; rows <= n; rows++){
        for(space = 1; space <= n - rows; space++){
       printf(" ");
        } 
        for(cols = 1 ; cols <= rows ; cols++){
            printf("%d ",rows);
        }
        printf("\n");
    }
    return 0;
}
// output :-
    1 
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5 
=========================================================================================================

    // cols

#include <stdio.h>

int main(){


    int n , rows , cols , space ;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(rows = 1; rows <= n; rows++){
        for(space = 1; space <= n - rows; space++){
       printf(" ");
        } 
        for(cols = 1 ; cols <= rows ; cols++){
            printf("%d ",cols);
        }
        printf("\n");
    }
    return 0;
}
// output :-
    1 
   1 2 
  1 2 3
 1 2 3 4
1 2 3 4 5


