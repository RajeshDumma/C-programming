#include <stdio.h>

extern int x;  // Reference to global variable in main.c

void fun2() {
    printf("From file two\n");
    printf("x = %d\n", x);
}
