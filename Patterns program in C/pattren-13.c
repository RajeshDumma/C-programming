/* #include <stdio.h>

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
<<<<<<< HEAD
 } */
----------------------------------------------------------------------------------------------------------
 // another method  only one for Loop
 #include <stdio.h>

 int main(){
   
    int n , rows , cols , colslimit;
    printf("Enter n value : ");
    scanf("%d",&n);

    for(rows = 1 ;rows <= n *2 -1 ;rows++){
        colslimit = (rows <= n) ? rows : n * 2 -rows;
        for(cols = 1 ;cols <= colslimit ;cols++){
             printf("* ");
        }
        printf("\n");
    }

    return 0;
 }
  ---------------------------------------------------------------------------------------------
// another logic 

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
    for(rows = 1 ; rows < n;rows++){
        for(cols = 1; cols <= n - rows; cols++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
 }


// output 

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
>>>>>>> aba097810665e5e4d7bd8d8c6934aa6e907863ba
