/* 
int islower(int c); // function declaration
islower
  tests if the given alphbaet is lowercase letter or not 
 input : t
 output : 2  // its will came 0 that is false

// when we pass a lowercase letter , it may return any integer other then 0


int isupper(int c)
 //isupper 
 tests if the given alphbaet is uppercase letter or not 
 input : T
 output : 0
 // when we pass a uppercase letter , it may return any integer other then 0
*/


#include <stdio.h>
#include <ctype.h>

int main(){

    char ch ;
  int check ;
    printf("Enter a Alphabet : ");
    scanf("%c",&ch);

   check = islower(ch);

    printf("check = %d" , check);

    return 0;
}
 
  // isupper or not , if not it will return 0 , if yes return 1 or 2 something values
 
#include <stdio.h>
#include <ctype.h>

int main(){

    char ch ;
  int check ;
    printf("Enter a Alphabet : ");
    scanf("%c",&ch);

   check = isupper(ch);

    printf("check = %d" , check);

    return 0;
}
