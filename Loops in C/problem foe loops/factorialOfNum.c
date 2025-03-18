//  c program to print factorial of a given number

#include <stdio.h>

int main(){
   
    int num;
    printf("Enter a number : " );
    scanf("%d",&num);
    int fact = 1;

    for(int i = num; i >= 1 ; i--){
        fact = fact * i;
    }
    printf(" factorial of %d is :%d ",num,fact);
    return 0;
}