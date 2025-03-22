 #include<stdio.h>
#include <stdlib.h>

void add();  // function declaration
void userChoice();  // function declaration

int main(){

//   printf("Before exit function");
//    exit(0);
//   printf("After exit function");

  add();

    return 0;
}

void add(){

    int a , b , c ;
    printf("Enter the numbers : ");
    scanf("%d %d",&a , &b);
    c = a + b ;
    printf("%d \n",c);
    userChoice();
}

void userChoice(){

    int choice ;
    printf("Do you want to calculate again \n");
    printf("yes : press 1 \n");
    printf("no : press 0 \n");
    printf("Enter your choice : ");
     scanf("%d",&choice);

     if(choice == 1){
        add();
     } else{
      //  exit(0);  // or
        // use use exit function like
        exit(EXIT_SUCCESS); // macros
     }
}

 

