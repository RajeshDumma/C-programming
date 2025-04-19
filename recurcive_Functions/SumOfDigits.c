#include<stdio.h>
int SumDigit(int);  // function declaration

int main(){
   
    int number , result ;

    printf("Enter the number : ");
    scanf("%d",&number);

    result = SumDigit(number);
    printf("Sum of digits: %d\n", result);

    return 0;
}

 int SumDigit(int n){
    if(n == 0)
    return 0 ;
   else
   return (n % 10) + SumDigit(n / 10);
 }