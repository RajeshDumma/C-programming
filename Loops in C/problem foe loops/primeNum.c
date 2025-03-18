// check whether a number is prime or not

#include <stdio.h>

int main(){
int num , count = 0 ;
printf("Enter the number : ");
scanf("%d",&num);

for(int i = 2 ; i < num ; i++){
    if(num % i == 0){
       count++;
       } 
}
if(count == 0){
   printf("%d is prime number",num);
} else{
    printf("%d is not a prime number",num);
}

    return 0;
}