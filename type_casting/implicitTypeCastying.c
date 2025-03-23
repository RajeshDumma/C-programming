#include <stdio.h>

int main() {
    int x = 10;
    float y = 3;
    
    float z = x / y;  // x (int) is converted to float, result is float
    printf("%.2f \n", z);  // Output: 3.33 (formatted to 2 decimal places)

    int a = 10;
    float b = 3;
    
    int c = a / b;  // a (int) is converted to float, result is float, but stored in int
    printf("%d\n", c);  // Output: 3 (decimal part is lost due to truncation)

    return 0;
}
