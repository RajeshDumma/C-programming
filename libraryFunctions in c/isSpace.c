// space ascii value is 32

// if check 32 == 65 false

#include<stdio.h>
#include<ctype.h>

int main(){

    char ch ;
    int checkSpace ;

    printf("Enter the character : ");
    scanf("%c",&ch);
    checkSpace = isspace(ch);

    printf("%d",checkSpace);
 
    return 0;
}