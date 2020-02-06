#include <stdio.h>

int main(void)
{
  int i = 1;
  int j = 0;
  while(i < 111) {
    j++;
    i *=2;
  }
  printf("\nValue of j variable is: %d\t\n",j);
  return 0;

}


/*

Output:

Value of j variable is: 7

*/
