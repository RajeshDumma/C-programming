//  c program for multiplication table of given number

#include <stdio.h>

int main(){
  int num , range;
  printf("Enter the number : ");
  scanf("%d",&num);
  printf("Enter a range : ");
  scanf("%d",&range);
  for(int i =1 ; i <= range ;i++){

    printf("%d x %d = %d \n",num , i , (i * num));
  }

    return 0;
}