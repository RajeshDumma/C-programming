// function scope in c language 

#include <stdio.h>
void hello(int); // function declarration

int main(){

    int a = 10 ;

    printf("scope for 'a' with in the main function \n");
    printf("x = %d\n\n",a);


    hello(a);

    return 0;
}

void hello(x){ // access the a value into x
int y = 20;

printf("x = %d , y = %d", x , y);

//printf("%d\n\n",a); // error because 'a' undeclared


}