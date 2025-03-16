/*
purpose: assignment operator ( = ) demonstrate  
 */

#include<stdio.h>

int main(){

    int a, b;
     a = 20;
     b = a ; // here assigning a value for b

     printf("a = %d , \n b is :%d \n", a , b);

     b = a + 10;
     printf("b is : %d\n",b);

     a = a * b ;
     printf("a = %d , \n b is :%d \n", a , b);
     b = a + b;
     printf("a = %d , \n b is :%d \n", a , b);
    return 0;
}