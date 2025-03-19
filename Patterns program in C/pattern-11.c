/* #include <stdio.h>

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
*/


