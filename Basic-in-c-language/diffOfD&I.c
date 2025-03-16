
// difference between %d and %i in c

/*
  decimal numbers  ex:- 25 , 30 , 56
  Octal numbers  ex:-  045, 025
  Hexadecimal Numbers ex:- 0xa6 , 0xc4
 */
#include <stdio.h>
int main(){
     
   /*  int x = 10;
    int y = 40;

    printf("%d\n",x);
    printf("%i",y); */

    int dec , oct , hex ;
    printf("Enter a number in Deciaml Format : ");
   // scanf("%i",&dec);
    scanf("%d",&dec);
    printf("Enter a number in Octal Format : ");
    scanf("%i",&oct);
  //  scanf("%d",&oct); // ingnor the 0 remaining value will print
    printf("Enter a number in Hexadecimal Format : ");
    scanf("%i",&hex);
  //  scanf("%d",&hex);

   // printf("Decimal Number = %i \n",dec); 
   printf("Decimal Number = %d \n",dec);  // for decimal number
   // printf("Octal Number = %i \n",oct);
   printf("Octal Number = %o \n",oct);  // for octal number
  //  printf("Hexadecimal Number = %i",hex);
  printf("Hexadecimal Number = %x",hex);  // for hexadecimal number both C or c

    return 0;
}
