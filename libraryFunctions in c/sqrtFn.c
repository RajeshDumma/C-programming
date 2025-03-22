#include <stdio.h>
#include <math.h>

int main(){

    double num ;
    double square_root ;
    printf("Enter a number : ");
    scanf("%lf",&num);

    square_root = sqrt(num);

    printf("%.2lf" , square_root);

    return 0;
}