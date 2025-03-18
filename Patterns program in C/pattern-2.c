// pattern 1 
/*
  1 2 3 4 5  
1 *
2 * * 
3 * * *
4 * * * *
5 * * * * *

// here 5 rows and 5 column
 */
 // fist check number of rows and cols

 #include <stdio.h>

 int main(){
   
    int n ;
    printf("Enter n value : ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ;i++){
        for(int j = 1 ; j <= i ; j++){
            printf("* ");
          //  printf("%d ",i); // it's print row wise 
            //  printf("%d ",j); //it's print column wise 
        }
        printf("\n");
    }

    return 0;
 }