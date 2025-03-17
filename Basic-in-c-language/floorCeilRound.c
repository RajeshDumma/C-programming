/* 
  floor() , ceil() , round()
  ex:- 2.25
   ceil() ==> 3.0
   round() ==>if (2.25 < 2.5) ? 2.0 : 3.0 // if (2.5 <= 2.5) ? 3.0 : 2.0
   floor() ==> 2.0
*/

#include <stdio.h>
#include <math.h>

int main() {
    float number;
    double floored, ceiled, rounded;

    printf("Enter a number: ");
    scanf("%f", &number);

    floored = floor(number); 
    ceiled = ceil(number);    
    rounded = round(number);  

    printf("floor: %.1f\n", floored);
    printf("round: %.1f\n", rounded);
    printf("ceil: %.1f\n", ceiled);

    return 0;
}
