// to demonstrate switch() statement

#include<stdio.h>

int main(){

     int day;
     printf("Enter the day : ");
     scanf("%d",&day);

     switch(day){
        case 1: printf("Sunday");
          break;
          case 2:printf("Monday");
          break;
          case 3: printf("Tuesday");
          break;
          case 4: printf("Wenesday");
          break;
          case 5: printf("Thursaday");
          break;
          case 6 :printf("Friday");
          break;
          case 7: printf("Saturday");
          break;
          default:printf("Invalid day");
     }
    return 0;
}

// you can use char value also in 
int main(){

    char ratting;
    printf("Enter the ratting : ");
    scanf("%c",&ratting);

    switch(ratting){
       case 'a': printf("Excelent");
         break;
         case 'b':printf("Good");
         break;
         case 'c': printf("Average");
         break;
         case 'd': printf("Below Average");
         break;
         case 'e': printf("Bad");
         break;
         case 'f' :printf("Wrost");
         break;
         default:printf("Invalid Ratting");
    }
   return 0;
}