/* #include <stdio.h>
#include <math.h>

int main(){

    double x ;
    double floorValue;
    printf("Enter a number : ");
    scanf("%lf",&x);

   floorValue = floor(x);

    printf("floorValue = %.2lf" , floorValue);

    return 0;
} */
// same as ceil value 

#include <stdio.h>
#include <math.h>

int main(){

    double x ;
    double ceilValue;
    printf("Enter a number : ");
    scanf("%lf",&x);

   ceilValue = ceil(x);

    printf("ceilValue = %.2lf" , ceilValue);

    return 0;
}
