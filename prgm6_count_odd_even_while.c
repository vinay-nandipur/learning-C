/*     program reads a sequence of numbers and counts how many numbers
    are even and how many odd;
    program terminates when a zero is entered     */

#include <stdio.h>

int main(void) {
    /* we will count the numbers here */
    int Evens = 0, Odds = 0;

    /* we will store the incoming numbers here */
    int Number;

    /* read first number */
    printf("Enter the First Number:\n");
    scanf("%d",&Number);

    /* 0 terminates execution */
    while(Number != 0) {
        /* check if the number is odd */
        if(Number % 2)
            /* increase „odd” counter */
            Odds++;
        else
            /* increase „even” counter */
            Evens++;
        /* read next number */
        printf("Enter the Next Number:\n");
        scanf("%d",&Number);
    }
    /* print results */
    printf("Even numbers: %d\n",Evens);
    printf("Odd numbers: %d\n",Odds);
    return 0;
}

/*

Output:

Enter the First Number:
10
Enter the Next Number:
20
Enter the Next Number:
30
Enter the Next Number:
1
Enter the Next Number:
3
Enter the Next Number:
5
Enter the Next Number:
0
Even numbers: 3
Odd numbers: 3

*/
