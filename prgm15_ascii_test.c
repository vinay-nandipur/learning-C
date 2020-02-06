#include <stdio.h>

int main(void)
{
  int Int;
  char Char;
  short Short;
  float Float;

  Int = 100; Char = '$'; Short = Char; Float = 0.5;
  Int = Short + Char + Float;
  Float = Int;
  printf("\nValue of Float variable is: %f\t\n", Float);
  return 0;

}

/*

Output:

Value if Float variable is: 72.000000

*/
