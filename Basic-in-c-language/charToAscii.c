// Write a c program to print character of an ASCII value//
//Author : Rajesh

#include <stdio.h>
// Character to ASCII
int main (){
     char ch ;
     printf("Enter the character : ");
     scanf("%c",&ch);
     printf("%d \n",ch);

     // ASCII value to character ;

     printf("Enter a ASCII value : ");
     int ascii;
     scanf("%d",&ascii);
     printf("%c",ascii);
     
    return 0;
}