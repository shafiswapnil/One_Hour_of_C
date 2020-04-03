#include <stdio.h>

int main()
{
    // checking even odd
    int num = 45;

    if (num % 2 == 0)
    {
        printf("%d is even number\n", num);
    }
    else
    {
        printf("%d is odd number\n", num);
    }

    // checking a number if it's positive or negative
    int number = -46;

    if (number > 0)
    {
        printf("%d is positive number\n", number);
    }
    else if (number < 0)
    {
        printf("%d is negative number\n", number);
    }
    else
    {
        printf("It's ZERO!\n");
    }

    return 0;
}