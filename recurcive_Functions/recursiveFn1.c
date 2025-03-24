/* // without return value with example

#include <stdio.h>
#include <stdlib.h>
void add(); // function declaration

int main(){
    
     add();
    return 0;
}

void add(){

    int a , b , c , choice;

    printf("Enter two numbers : ");
    scanf("%d %d",&a , &b);
    c = a + b;

    printf("%d \n",c);

    printf("press 1 to add two numbers \n");
    printf("press 0 to exit \n");

    printf("ENter your choice : ");

    scanf("%d", &choice);

    if(choice == 1)
      add();
    else 
    exit(0);

} */


// with return value  
// sum of N natural numbers using recursion function

#include <stdio.h>
int sum(int); // function declaration

int main(){
  
    int num , result;
    printf("Enter the number : ");
    scanf("%d",&num);

      result = sum(num);
      printf(" result = %d",result);

    return 0;
}

int sum(int n){

    if(n != 1)
    return n + sum(n -1);   
else
return n;

}


