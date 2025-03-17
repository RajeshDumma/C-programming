// find Albhabet or digit or special character in c language 

#include <stdio.h>

int main(){
   
    char ch ;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    printf("Albhabet");
else if(ch >= '0' && ch <= '9')
printf("Digit");
else
printf("special character");

    return 0;
}