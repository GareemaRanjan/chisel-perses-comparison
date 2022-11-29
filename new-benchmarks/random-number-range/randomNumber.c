// This piece of code is originally gotten from Geeks - https://www.geeksforgeeks.org/generating-random-number-range-c/

// C program for generating a random number in a given range.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int lower;
    int upper;
    int count;

    // initializing certain numbers for the range

    lower = 4, upper = 7, count = 1;

    // using srand for the generator
    srand(time(0));

    for (i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
    return 0;
}
