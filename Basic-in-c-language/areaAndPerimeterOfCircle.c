#include <stdio.h>
#define PI 3.14 

int main() {
    float radius, area, perimeter;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("\nArea of the circle: %.2f", area);
    printf("\nPerimeter of the circle: %.3f\n", perimeter);

    return 0; // Added return statement
}
