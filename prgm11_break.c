#include <stdio.h>

int main(void) {
    int number;
    int max = 0;
    int counter = 3;

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
        break;


    } while (counter != 0);

          printf("The largest number is %d\n",max);

    return 0;
}
