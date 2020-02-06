#include <stdio.h>

int main(void)
{
  int i;
  i = 100;
     if(i >= 100) {
        i += 100;
        if(i >= 0)
           i -= 100;
        else {
          i += 100;
        }
        i *= 5;
      }
     else
        i -= 100;
    printf("\nValue of i variable is: %d\t\n", i);
    return 0;

}

/*

Output:

Value of i variable is: 500

*/
