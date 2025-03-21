/*
in function 
1. function defination 

return_type functionName(Parameter_list){};
void functionname(){}
int finction add(int a , int b, int c){}

2.function call

add( 10 , 30);
add( 10 , 30 , 50);

3. function declaration

return_type functionName(parameter_List);
*/

// example :-

 #include <stdio.h>
void welcome();  // function declaration

int main(){
    printf("Before function call \n");
    welcome();
    printf("after function call \n");
    return 0;
}

void welcome(){ // function defination
    printf("Hey rajesh! \n");
    printf("Wlcome to my functional world \n");
}

// add and sub of two numbers using function 


