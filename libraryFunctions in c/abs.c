#include <stdio.h>
#include <math.h>

int main(){

    int x ;
    int absoluetValue;
    printf("Enter a number : ");
    scanf("%d",&x);

   absoluetValue = abs(x);

    printf("absoluetValue = %d" , absoluetValue);

    return 0;
}
 
//  fabs library function 

// it is used for floating points obsoluet

#include <stdio.h>
#include <math.h>

int main(){

    double x ;
    double absouletValue;
    printf("Enter a number : ");
    scanf("%lf",&x);

   absouletValue = fabs(x);

    printf("absouletValue = %.2lf" , absouletValue);

    return 0;
}

