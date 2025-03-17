
// if else lader in c language

/* #include <stdio.h>


int main(){
   
    int ratting;
    printf("Enter your rating in numbers upto 5 : ");
    scanf("%d",&ratting);

    if(ratting == 5){
        printf("Excellent");
    } else if(ratting == 4){
        printf("Good");
    }else if(ratting == 3){
        printf("Average");
    }else if(ratting == 2){
        printf("Bad");
    }else{
        printf("Wrost");
    }

    return 0;
}
 */

// conditions in if 

/* #include <stdio.h>

int main(){
   
    int i , j;
    printf("Enter i value : ");
    scanf("%d",&i);
    printf("Enetr j value : ");
    scanf("%d",&j);

    if(i > 10 && j < 50)
    printf("condition is true");
else
printf("condition false");

    return 0;
} */

// calculate Modular Division 

#include <stdio.h>

int main() {
    int a, b, result;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else if (a > b) {
        result = a % b;
        printf("Result is: %d\n", result);
    } else {
        printf("Condition failed\n");
    }

    return 0;
}
