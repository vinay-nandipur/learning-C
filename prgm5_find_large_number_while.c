#include <stdio.h>

int main(void) {
        /* temporary storage for the incoming numbers */
        int number;

        /* we will store the currently greatest number here */
        int max = -100000;

        /* get the first value */
        printf("Enter the Number:\n");
        scanf("%d",&number);

        /* if the number is not equal to -1 we will continue */
        while(number < 100) {

                /* is the number greater than max? */
               if(number > max)

                     /* yes – update max */
                     max = number;

                /* get next number */
                printf("Enter the Next Number:\n");
                scanf("%d",&number);


        }

        /* print the largest number */
        printf("The largest number is %d \n",max);

        printf("you have entered a number greater than 100, that is: %d\n",number);

        /* finish the program successfully */
        return 0;
}

/*

Output:

Enter the Number:
10
Enter the Next Number:
20
Enter the Next Number:
5
Enter the Next Number:
101
The largest number is 20
you have entered a number greater than 100, that is: 101

*/
