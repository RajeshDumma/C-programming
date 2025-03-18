// To check weather the given number is palindrome or not

#include <stdio.h>

int main(){
     
    int num , n1 ,reminder,reverse = 0;
    printf("enter a number : ");
    scanf("%d",&num);
     n1 = num ;
    while(num != 0){
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num = num / 10;
    }
    if(n1 == reverse){
        printf("palindrome");
    } else{
        printf("not palindrome");
    }
    return 0;
}