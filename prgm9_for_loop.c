#include <stdio.h>

int main(void) {
    int exp;
    int pow = 1;

    for(exp = 0; exp < 16; exp++) {
    printf("2 to the power of %d is %d\n",exp,pow);
        pow *= 2;
    }
    return 0;
}

/*

Output:

2 to the power of 0 is 1
2 to the power of 1 is 2
2 to the power of 2 is 4
2 to the power of 3 is 8
2 to the power of 4 is 16
2 to the power of 5 is 32
2 to the power of 6 is 64
2 to the power of 7 is 128
2 to the power of 8 is 256
2 to the power of 9 is 512
2 to the power of 10 is 1024
2 to the power of 11 is 2048
2 to the power of 12 is 4096
2 to the power of 13 is 8192
2 to the power of 14 is 16384
2 to the power of 15 is 32768

*/
