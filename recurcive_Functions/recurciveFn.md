
// normal function 

int main(){

    welcome();
    return 0;
}
void welcome(){

    printf("welcome to my world!");
}

// Recurcive function

int main(){

    welcome();

    return 0;
}

void welcome(){
    printf("welcome to my world!");
    welcome();
}

Recursive function :- A function that calls itself is know as a recursive function:


without return value  vs with return value

ex :  

int main(){

    welcome();

    return 0;
}

void welcome(){
    printf("welcome to my world!");
    welcome();
} 

// its repeating the infinate loops , so solution is exit() ==> exit function






#include <stdio.h>

// Function declaration
void welcome(int count);

int main() {
    welcome(5);  // Call the function with a limit
    return 0;
}

// Recursive function definition
void welcome(int count) {
    if (count == 0) {  // Base condition to stop recursion
        return;
    }
    
    printf("Welcome to my world!\n");
    welcome(count - 1);  // Recursive call with decreased count
}



// exit() 

#include <stdio.h>
#include <stdlib.h>  // Required for exit()

void welcome(int count);

int main() {
    welcome(5);
    return 0;
}

void welcome(int count) {
    if (count == 0) {
        exit(0);  // Terminate the program safely
    }

    printf("Welcome to my world!\n");
    welcome(count - 1);
}
