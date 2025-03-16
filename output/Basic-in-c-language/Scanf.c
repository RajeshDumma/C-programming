// scanf is use to take the user inputs  , scanf()

// sacnf() , getc() , getchar()
// scan formated

#include <stdio.h>

int main(){
    // here we declared and initilized directly
     /* int a = 10 ; 
      float x = 10.76;
      double y = 13.858986;
      char ch = 'R';
      printf("int format :%d,\n float format:%f,\n double format:%lf,\n char foemat:%c",a,x,y,ch);
 */

 printf("taken user inputs for using sanf() \n");

 int x ;
 printf("enter a 1st velue : ");
 scanf("%d",&x);
 int y;
 printf("enter a 2nd velue : ");
 scanf("%d",&y);

 printf("sum of x and y : %d + %d = %d\n", x, y, x + y);


    return 0;
}