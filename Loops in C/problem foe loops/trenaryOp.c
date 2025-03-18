// demonstrate conditional operator or ternary operator

#include <stdio.h>

int main(){
    
    int a , b ,greatest ;
    printf("Enter two numbers : ");
    scanf("%d %d",&a, &b);

  //  greatest = (a > b ) ? a : b;
  greatest = (a > b ) ? a+b : a-b;
    printf("%d",greatest);
    return 0;
}