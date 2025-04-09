// prime number using function

#include <stdio.h>
int checkPrime(int); // function declaration


int main(){

 int num ;
 printf("Enter the number : ");
 scanf("%d",&num);
  
 if(checkPrime(num)){
    printf("%d is a prime number :\n " , num);
 } else{
    printf("%d not a prime number :\n ", num);
 }
   
    return 0;
}

 int checkPrime(int n){
    if(n < 2) return 0;
    
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
          return 0;
        }
    }
    return 1;

 }