// find vowel or Consonant in c

#include <stdio.h>

int main(){
 
    char ch ;
    printf("Enetr a Alphabet : ");
    scanf("%c",&ch);

    if((ch >= 'A' && ch <= 'Z')|| (ch >= 'a' && ch <= 'z')){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch =="A" 
        || ch == "E" || ch == 'I' || ch == "O" || ch == "U"){
            printf("Given Alphabet is vowel");
        }else{
            printf("Given Alphabet is Consonant");
        }
    }else{
        printf("not a Alphabet");
    }

    return 0;
}