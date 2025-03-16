// the format specifiers is a string used in the formatted input and output function

/* ex :-
  int x = 5;
  printf("%d",x); // output : 5


  %d for int , %f for float , %lf for double , %c for char
 */

 #include <stdio.h> 
 int main(){
    int a = 30;
    float x = 40.7897;
     double y = 90.653426782;
     char ch = 'D';
     printf("%d,\n%.3f,\n%.2lf,\n%c",a,x,y,ch);
     return 0;
 }