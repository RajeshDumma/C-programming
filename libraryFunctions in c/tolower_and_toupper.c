 #include<stdio.h>
#include<ctype.h>

int main(){

    char ch;
    char lowercase;

    printf("Enter a uppercase letter : ");
    scanf("%c",&ch);

    lowercase = tolower(ch);

    printf("%c",uppercase);

    return 0;
}
 
// toupper case letter 


#include<stdio.h>
#include<ctype.h>

int main(){

    char ch;
    char uppercase;

    printf("Enter a lowercase letter : ");
    scanf("%c",&ch);

    uppercase = toupper(ch);

    printf("%c",uppercase);

    return 0;
}
