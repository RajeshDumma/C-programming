// pattern 1 
/*
  1 2 3 4 5  
1 * * * * *
2 * * * * *
3 * * * * *
4 * * * * *
5 * * * * *

// here 5 rows and 5 column
 */
 // fist check number of rows and cols

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

 // pattern 1 
/*
  1 2 3 4 5  
1 * * * * *
2 * * * * *
3 * * * * *
4 * * * * *
5 * * * * *

// here 5 rows and 5 column
 */
 // fist check number of rows and cols

 