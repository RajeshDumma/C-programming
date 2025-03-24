// print fibonacci serice n terms

#include <stdio.h>

int main(){

    int num , first = 0 , second = 1, next;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    for(int i = 1 ; i <= num ;i ++){
        printf("%d " , first);
         next = first + second ;
         first = second ;
         second = next ;
    }

    return 0;
} 

// print fibonacci serice nth terms (Ex : - 10 , 10 value only print)

#include <stdio.h>

int main(){

    int num , first = 0 , second = 1, next;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    for(int i = 1 ; i < num ;i ++){
     //   printf("%d " , first);
         next = first + second ;
         first = second ;
         second = next ;
    }
    printf("\n first number nth term : %d " , first);

    return 0;
} 

// print fibonacci serice upto n (Ex : - 10 , below 10 numbers)

#include <stdio.h>

int main(){

    int num , first = 0 , second = 1, next;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    while(first <= num){
        printf("%d " , first);
         next = first + second ;
         first = second ;
         second = next ;
    }

    return 0;
}
