#include <stdio.h>
#include <math.h>

int main(){

    double x , y ;
    double x_power_y ;
    printf("Enter a number : ");
    scanf("%lf %lf",&x , &y);

   x_power_y = pow(x , y);

    printf(" x_power_y = %.2lf" , x_power_y);

    return 0;
}