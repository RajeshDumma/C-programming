#include <stdio.h>
int add(int , int);


int main(){
 int x , y , z;
 printf("Enter two number : ");
 scanf("%d %d",&x , &y);

 z = add( x , y);
 printf("z = %d",z);
    return 0;
}

int add(int a , int b){
    int c = a + b ;
    return c;
  }