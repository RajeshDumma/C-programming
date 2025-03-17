// increment and decrement operatos

/* 
 a = 5;
 a = a++; it will automtically update 

 increment ==>> pre Increment and post Increment
 pre Increment = first +1 before print the statement
 post Increment = first print the statement after add +1 value ;

  same as Decrement also
*/

#include <stdio.h>

int main(){
     int a , b , c;
     a = 10;
     printf("%d \n",a);

     b = a++;
     b = --b;
    c = ++a + b++;
   c = a++ + ++b ;
     printf("a = %d b = %d c = %d", a , b,c);
    return 0;
}