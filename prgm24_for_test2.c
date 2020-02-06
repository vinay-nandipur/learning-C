#include <stdio.h>

int main(void) {
  int i,t[5];
  for(i=0;i<5;i++)
  {
     t[i] = 2 * i ; // {t[0]=0, t[1]=2, t[2]=4, t[3]=6, t[4]=8
     printf("%d\n", t[i]);
  }
  i = 0;
  for(i=0;i<5;i++)
  {
      i += t[i]; // 0, 3, 6, 9, 12
      printf("%d\n",i);
  }
  printf("%d\n", i);
  return 0;

}

/* Output:

0
2
4
6
8
0
3
12
13

*/
