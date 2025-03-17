// print even numbers and odd umbers 1 to 100 in c

#include <stdio.h>

int main(){
   
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);

    while(num <= 100){
        if(num%2 ==0){ // for odd number (num%2 != 0) or num%2 == 1
            printf("%d  ",num);
        } 
        num++;
        }

    return 0;
}