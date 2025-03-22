#include<stdio.h>
#include<math.h>

int main(){

   double x;

    printf("Enter the Number : ");
    scanf("%lf",&x);

    printf("%.8lf",sin(x));
 
    return 0;
}

// cos  and tan 

#include<stdio.h>
#include<math.h>

int main(){

   double x;

    printf("Enter the Number : ");
    scanf("%lf",&x);

    printf("cos(%.2lf) is %.8lf \n",x , cos(x));
 
     printf("tan(%.2lf) is %.8lf",x , tan(x));
    return 0;
}
