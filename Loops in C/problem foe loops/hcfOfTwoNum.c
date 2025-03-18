//  Greatest Common Divisor or
// Highest Common Factor

#include <stdio.h>

int a , b , min , GCD ;
int main(){
printf("Enter two numbers : ");
scanf("%d %d",&a,&b);

min = (a < b) ? a : b ;

for(int i = 1 ; i <= min;i++){
  if(a % i == 0 && b % i == 0){
    GCD = i;
  }
}
printf("%d",GCD);

return 0;
}