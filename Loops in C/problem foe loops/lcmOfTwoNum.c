// find LCM of Two Numbers 
// LCM Least Common Multiple
#include <stdio.h>
#include <stdbool.h>
int main(){
     int a , b , max , LCM ;
     printf("Enter two Values : ");
     scanf("%d %d",&a , &b);

     max = (a > b) ? a : b;
     while(true){
        if(max % a == 0 && max % b == 0){
            LCM = max;
            break;
        }
        max++;
     }
     printf("%d",LCM);
    return 0;
}