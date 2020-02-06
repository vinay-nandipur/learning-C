/* finding the larger of three numbers */
#include <stdio.h>

int main(void) {
	/* the three numbers */
	int number1,number2,number3;

	/* we will save the larger number here */
	int max;

	/* read three numbers */

  printf("Enter the First Number:\n");
	scanf("%d",&number1);
  printf("Enter the Second Number:\n");
	scanf("%d",&number2);
	printf("Enter the Third Number:\n");
	scanf("%d",&number3);

	/* we temporarily assume that the former number is the larger one */
	/* we will check it soon */
	max = number1;

	/* we check if the second value is the largest */
	if(number2 > max)
		max = number2;

  /* we check if the third value is the largest */
	if(number3 > max)
    max = number3;

	/* we print the result */
	printf("The largest number is %d \n",max);

	/* we finish the program successfully */
	return 0;
}

/*

Output:

Enter the First Number:
1
Enter the Second Number:
2
Enter the Third Number:
3
The largest number is 3

*/
