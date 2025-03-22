//  int isalpha(int c); 65 to 90 && 97 to 122
// return some values like 1 or 2 , if not return 0;

/* 
#include<stdio.h>
#include<ctype.h>

int main(){

    char ch;
    int isAlpha;

    printf("Enter a Character : ");
    scanf("%c",&ch);

    isAlpha = isalpha(ch);

    printf("%d",isAlpha);

    return 0;
} */


// isdigit ==> it will check 48 to 57 in between this number
// it's return 1 or 2 , if not it's return 0

#include<stdio.h>
#include<ctype.h>

int main(){

    char ch; // here check ch between 48 to 57
    int isDigit;

    printf("Enter a Digit : ");
    scanf("%c",&ch);

    isDigit = isdigit(ch);

    printf("%d",isDigit);

    return 0;
}
