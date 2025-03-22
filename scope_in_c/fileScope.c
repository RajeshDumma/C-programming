// file scope in c  , file scope same as program but one change is static

// static this can wotk in that file only ;

#include  <stdio.h>
#include "fileScopeFile2.c"
void fun1();


 static int a ;
int main(){
   printf("Scope 'a' is in this file only \n");
    a = 100;
  printf("a = %d\n",a);

  fun1();
  fun2();

    return 0;
}

void fun1(){
  printf("1st function \n");
    a = 200;

    printf(" x = %d \n",a);
     
    a = 400;
}