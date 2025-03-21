 /*
 4 types of catecories in c

 1. without Argument
    without return value

 2.  without Argument
     with return value
     
3. with argument ;
   without return value   

4. with Argument
   with return value
*/

// 1st one 

#include <stdio.h>
void greet();

int main(){
   
    greet();
    return 0;
}
 
void greet(){
    printf("welcome to my World!");
}

// 2.  without Argument
//      with return value
     
#include <stdio.h>
int selectLanguage();

int main(){
   
   int choice ;
   choice = selectLanguage();
   if(choice == 1){
       printf("You selected Telugu \n");
   } else if (choice == 2){
       printf("You selected English \n");
   }else if (choice == 3){
       printf("You selected Hindi \n");
   }else{
        printf("Invalid Choice \n");
   }
    
    return 0;
}
 
int selectLanguage(){
    
    int myLanguage ;
    printf("press 1 to select Telugu \n");
      printf("press 2 to select English \n");
        printf("press 3 to select Hindi \n");
        scanf("%d",&myLanguage);
        
        return myLanguage;
    
} 
 // 3.  with Argument
//      without return value
     
 #include <stdio.h>
void totalMarks();

int main(){
   
   int sub1 = 10 , sub2 = 20 , sub3 = 30;
   
   totalMarks( sub1 , sub2 , sub3);
    
    return 0;
}
void totalMarks(int x , int y , int z){
    int total = x + y + z ;
    printf(" total marks = %d", total);
        
} 

// 4. with Argument
//    with return value

#include <stdio.h>
float areaOfRectangle(float , float);

int main(){
   
   float length = 10.5 , breadth = 20.5 , area;

   area = areaOfRectangle(length , breadth);

   printf("Area of Rectangle is %.2f",area);
    
    return 0;
}
float areaOfRectangle(float l , float b){
     float a ;
     a = l * b;

     return a;
}
