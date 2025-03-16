// simple intrest ptr/100
/* 
  principal Amount = p ==> 1000
  Rate of intrest (10%) = R
  time in years = T == 1 year
  si = ptr / 100
  Total amount + si = ?
*/
#include <stdio.h>

int main(){

   float a , si , p , t , r ;

   printf("Enter principal Amount : \n");
   scanf("%f",&p);
   printf("Enter Rate of intrest : \n");
   scanf("%f",&r);
   printf("Enter Time in years : \n");
   scanf("%f",&t);

   si = (p*t*r)/100;
   a = p + si ;

   printf("Simple intrest is : %.2f \n",si);
   printf("Total Amount is : %.4f",a);

    return 0;
}