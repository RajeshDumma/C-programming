#include <stdio.h>
#include <math.h>

int main(){

    int number , number_copy , count = 0, remainder ,result = 0;

    printf("Enter a number : ");
    scanf("%d",&number);
    number_copy = number ;
    
    while(number != 0){
        number /= 10;
        count ++;
    }
    number = number_copy ;
    while(number != 0){
        remainder = number % 10 ;
        result += (int)round(pow(remainder, count)); // Round to avoid floating-point errors
        number  /= 10;
    }
    if(number_copy == result){
    printf("Armstrong number\n");
    }
    else{
     printf( "Not an Armstrong number\n");
    }
       return 0;
}