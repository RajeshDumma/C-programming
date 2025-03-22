#include <stdio.h>
#include "programScopeFile1.c"  // Including additional files
#include "programScopeFile2.c"

void fun1();
void fun2();

int x;  // Global variable with program scope

int main() {
    printf("Scope of 'x' is the whole program.\n");

    x = 10;
    printf("x = %d\n", x);

    fun1();  // Function call from first file
    fun2();  // Function call from second file

    return 0;
}
