/*     program reads any 2 numbers entered between 0 to 100 and finds the larest of them     */

#include <stdio.h>

    int main(void) {
    int number;
    int max = 0;
    int counter = 2;

    do {
        printf("Enter the Number:\n");
        scanf("%d",&number);
        if(number <= 100 && number >= 0)
        {
            counter--;
            if(number > max)
                max = number;
        }
        else
        {
            printf("entered number is invalid!, number should be betweeen 0 to 100\n");

        }
    } while (counter != 0);

          printf("The largest number is %d \n",max);

    return 0;
}
