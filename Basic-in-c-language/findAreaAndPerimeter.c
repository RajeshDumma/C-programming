// write a C program to find Area and Perimeter of a Rectangle

/* 
 Area = > length a
*/

#include <stdio.h>

int main(){
    
  float length , breadth , area , perimeter ;

  printf("Enter length of a Rectiangle : ");
  scanf("%f",&length);
  printf("Enter breadth of a Rectangle : ");
  scanf("%f", &breadth);

 // area = length * breadth
    area = length * breadth;
  // perimeter = 2 (length + breadth)
  perimeter = 2 * (length + breadth);

  printf("Area of a Rectangle = %.2f \n",area);
  printf("perimeter of Rectangle = %.3f",perimeter);
    return 0;
}