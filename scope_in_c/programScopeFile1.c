#include <stdio.h>

extern int x;  // Reference to global variable in main.c

void fun1() {
    printf("From file one\n");
    x = 100;  
    printf("fun1 function, x = %d\n", x);
    x = 200;
}
