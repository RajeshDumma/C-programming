 // a small example for nested if condition based

#include <stdio.h>

int main(){

    int Category , item;
    printf("press 1 for Tiffen \n");
    printf("press 2 for fast-Food\n");

    printf("Enetr the Category No : ");
    scanf("%d",&Category);

    if(Category == 1){
        printf("press 1 for Dosa\n");
        printf("Press 2 for Idly\n");
        printf("press 3 for puri \n");

        printf("Eneter Item No : ");
        scanf("%d",&item);
        if(item == 1)printf("You ordered Dosa");
        else if(item == 2)
         printf("you ordered Idly");
        else if(item == 3)
        printf("you ordered puri");
    else
    printf("choose given item only");
    }
    else if(Category == 2){
    printf("press 1 for Nudiels\n");
    printf("Press 2 for gobi\n");
    printf("press 3 for FriedRice \n");

    printf("Eneter Item No : ");
    scanf("%d",&item);
    if(item == 1)printf("You ordered Nudiles");
    else if(item == 2)
     printf("you ordered gobi");
    else if(item == 3)
    printf("you ordered FriedRice");
else
printf("choose given item only");
} 
else{

    printf("Invalid options");
}

return 0;
}