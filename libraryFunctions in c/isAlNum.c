/* 
 isalnum can check 48 to 57 , 65 to 90 an 97 to 122
if the given character between these it will return true; otherWISE FALSE ;
*/

#include<stdio.h>
#include<ctype.h>

int main(){

    char ch ;
    int checkisAlnum ;

    printf("Enter the character : ");
    scanf("%c",&ch);
    checkisAlnum = isalnum(ch);

    printf("%d",checkisAlnum);
 
    return 0;
}