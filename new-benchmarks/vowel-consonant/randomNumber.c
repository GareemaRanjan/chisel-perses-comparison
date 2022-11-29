// This piece of code is originally gotten from Geeks - https://www.geeksforgeeks.org/generating-random-number-range-c/

// C program for generating a random number in a given range.

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

int printf(const char *p, ...);
int main()
{
    int i;
    int lower;
    int upper;
    int count;
    // long modulus = 7883;

    // initializing certain numbers for the range

    lower = 4, upper = 7, count = 1;

    // using srand for the generator
    // rand(time(0));
    {
        int num = (7883 % (upper - lower + 1)) + lower;
        printf("%d ", num);
        // printf("hello \n");
    }
    return 0;
}
