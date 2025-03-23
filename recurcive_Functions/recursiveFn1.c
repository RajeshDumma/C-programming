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



