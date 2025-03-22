Type Casting in C
Type casting is the process of converting one data type to another.
It is mainly classified into two types:

Implicit Type Casting (Automatic Conversion)

Explicit Type Casting (Manual Conversion)

1. Implicit Type Casting (Automatic Conversion)
The compiler automatically converts smaller data types to larger data types.

There may be data loss when converting from a larger to a smaller data type.

Example:

c
Copy
Edit
#include <stdio.h>

int main() {
    int a = 5;
    float b = 2;
    
    float c = a / b;  // 'a' (int) is automatically converted to float
    printf("Implicit Casting Result (float c): %f\n", c); // Output: 2.0 (Data loss)
    
    int d = a / b;  // 'b' (float) is converted to int
    printf("Implicit Casting Result (int d): %d\n", d); // Output: 2 (Data loss)

    return 0;
}

Explanation:
In float c = a / b;, the integer a is implicitly converted to float, but due to integer division, the result is 2.0 instead of 2.5.

In int d = a / b;, b (float) is implicitly converted to int, leading to a data loss (fractional part is lost).


2. Explicit Type Casting (Manual Conversion)

Done using (data type) before a variable.

Used when we need precise control over type conversion.

Example of Explicit Type Casting

#include <stdio.h>

int main() {
    int a = 5;
    float b = 2;

    // Explicit type casting
    float c = (float) a / b;  // Converts 'a' to float, result: 2.5
    printf("Explicit Casting Result (float c): %f\n", c);

    float d = a / (float) b;  // Converts 'b' to float, result: 2.5
    printf("Explicit Casting Result (float d): %f\n", d);

    return 0;
}
Explanation:
(float) a / b ensures a is converted to float, so floating-point division occurs (5.0 / 2 = 2.5).

a / (float) b ensures b is converted to float, also resulting in 2.5.

Key Differences Between Implicit and Explicit Type Casting

Feature	Implicit            Type Casting	                            Explicit Type Casting
Performed By	               Compiler                                  	Programmer
Data Loss	                   Possible	                                Can be controlled
Syntax	                        Automatic	                        Requires (type) conversion
Example	                 float x = 5; (int → float)	                    float x = (float) 5 / 2;