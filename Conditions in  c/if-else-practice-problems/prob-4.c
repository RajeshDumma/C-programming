// Print reverse case of a Alphabet 

// A to Z = 65 to 90 , a to z = 97 to 122

#include <stdio.h>

int main(){
   
    char ch , reversCh ;
    printf("Enter the Alphabet : ");
    scanf("%c",&ch);
      if(ch >= 'A' && ch <= 'Z'){
        reversCh = ch + 32;
        printf("%c",reversCh);
      } else if(ch >= 'a' && ch <= 'z' ){
        reversCh = ch -32 ;
        printf("%c",reversCh);
      } else{
        printf("not a Alphabet");
      }
    return 0;
}