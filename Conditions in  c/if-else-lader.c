
// if else lader in c language

 #include <stdio.h>
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
 ======================================================================================================

// conditions in if 

#include <stdio.h>

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
}

// calculate moduler
