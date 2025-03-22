
// block scope in c

#include <stdio.h>


int main(){
    
    int a = 10 , b = 20;
    
    printf("Block scope \n");
    // block scope , here i will be within the for block only
    for(int i = 1 ; i<= 1 ; i++){

         printf(" scope for i with in for block %d \n",i);

    }
    // ex:-2  , if

    if(a < b){
       
        int c = a + b; // here access the a and b values because we declared in main function
        printf("  scope fo c  with in if block  %d \n",c);
    }


    {
        int x = 50;

        printf("scope for x with in j block only %d \n",x);
 //       printf("scope for x with in j block only %d \n",i); // showing error because we can't access i value ,it is in for block;
    
    }

    return 0;
}