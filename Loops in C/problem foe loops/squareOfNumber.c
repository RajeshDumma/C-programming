// square of a number anf find sum of a first natural number ;

#include <stdio.h>

int main(){
   int num;
   printf("Enterb a number : ");
   scanf("%d",&num);
   
   for(int i =1; i <= num; i++){
    printf("%d square is : %d \n",i , i*i);
   }
  int sum ;
   for(int i =1; i <= num; i++){
   sum = sum + (i*i);
   }
   printf("sum of squares is : %d ",sum);
    return 0;
}