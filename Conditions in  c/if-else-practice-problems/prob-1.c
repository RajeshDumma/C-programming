// find weather a n umber is even or odd in c 

#include <stdio.h>
int main(){
   
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num % 2 == 0)
    printf("%d is even number",num);
else
printf("%d is odd number",num);
    return 0;
}

