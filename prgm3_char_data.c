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
     return 0;
}
