#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    
    float c = a / b;  // Integer division occurs first: 10 / 3 = 3
    printf("%f \n", c);  // Output: 3.000000 (Data loss)

    int x = 10;
    int y = 3;
    
    float z = (float)x / y;  // Explicit type casting ensures floating-point division (10.0/3) = 3.333
    printf("%.2f \n", z);  // Output: 3.33(Correct result)
  
    z = x / (float) y ;
    printf("%.2f \n", z); 
    
    return 0;
}
