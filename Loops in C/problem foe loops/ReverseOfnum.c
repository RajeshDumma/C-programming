// Reverse of a number in 

#include <stdio.h>


int main(){

     int num , reminder , reverse = 0;
     printf("Enter a number : ");
     scanf("%d",&num);

     while(num != 0){
        reminder = num % 10 ;
        reverse = reverse * 10 + reminder;
        num = num / 10;
     }
     printf("%d",reverse);

    return 0;
}