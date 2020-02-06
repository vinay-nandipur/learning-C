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
        continue;


    } while (counter != 0);

          printf("The largest number is %d\n",max);

    return 0;
}


/*

Output:

Enter the Number:
10
Enter the Number:
25
Enter the Number:
101
entered number is invalid!, number should be betweeen 0 to 100
Enter the Number:
99
The largest number is 99

*/
