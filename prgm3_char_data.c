#include <stdio.h>
int main(void) {
     int VarInt;
     char VarChar;
     float VarFloat;
     VarInt = 2012;
     VarChar = 'r';
     VarFloat = 3.1415;
     printf("\tThe year is %d.\n \tThe radius is denoted as %c\n \twhile PI is equal to %f\n",VarInt, VarChar, VarFloat);

     int i;
     i = 31;
     printf("\tInteger Value: %d\n \tASCII Hexadecimal Value: %x\n \tASCII Octal Value: %o\n",i,i,i);

     int value,square;
     printf("\tGive me a number and I will square it!\n");
     scanf("%d", &value);
     //scanf is a function retrieved from stdio.h header file used to read user input, & symbol used to identify memory location of variable
     square = value * value;
     printf("\tYou've given %d\n",value);
     printf("\tThe squared value is %d\n",square);


     return 0;
}
