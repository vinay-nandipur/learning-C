#include <stdio.h>
#include <math.h>
int main(void) {
     int VarInt;
     char VarChar;
     float VarFloat;
     VarInt = 2020;
     VarChar = 'r';
     VarFloat = 3.1415;
     printf("\tThe year is %d.\n \tThe radius is denoted as %c\n \twhile PI is equal to %f\n",VarInt, VarChar, VarFloat);

     int i;
     i = 31;
     printf("\tInteger Value: %d\n \tASCII Hexadecimal Value: %x\n \tASCII Octal Value: %o\n",i,i,i);

     int value,square;
     float squareroot;
     printf("\tGive me a number and I will square it!\n");
     scanf("%d", &value);
     //scanf is a function retrieved from stdio.h header file used to read user input, & symbol used to identify memory location of variable
     if(value >= 0.0) {
        squareroot = sqrt(value);
        //sqrt function retrieved from math.h header file, used to find squareroot.
      }
     square = value * value;
     printf("\tYou've given %d\n",value);
     printf("\tThe squared value is %d\n",square);
     printf("The sqaure root is: %f\n",squareroot);

     char c;
     c = 'A';
     c += ('Z' - 'A');
     c += '\0';
     c -= ('Z' - 'a');

     printf("\t The value of C is: %c\n", c);


     return 0;
}

/*

Output:

The year is 2020.
The radius is denoted as r
while PI is equal to 3.141500
Integer Value: 31
ASCII Hexadecimal Value: 1f
ASCII Octal Value: 37
Give me a number and I will square it!
2
You've given 2
The squared value is 4
The sqaure root is: 1.414214
The value of C is: a

*/ 
