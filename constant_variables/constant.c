#include <stdio.h>

int main(){

    const int i = 10 ;
   // i = 20; // error: assignment of read-only variable 'i' cannot re-assigned const variable;

   int x = 20 , y;
   y = i + x;
    const char ch = 'D';
    const float f = 12.599;
    const double d = 10.4;

    printf("i = %d \n ch = %c \n f = %.4f \n d = %.10lf \n y =%d",i , ch , f , d , y);

    return 0;
}