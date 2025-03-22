#include<stdio.h>
#include<math.h>

int main(){

   double x;

    printf("Enter the Number : ");
    scanf("%lf",&x);

    printf("log(%.2lf) is %.8lf \n",x , log(x));
 
     printf("log10(%.2lf) is %.8lf",x , log10(x));
    return 0;
}