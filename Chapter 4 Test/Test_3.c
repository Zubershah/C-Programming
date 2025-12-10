/*
Write a program to sum first ten natural numbers using while loop.
*/
#include <stdio.h>
int main()
{
    int sum = 0, i = 1;

    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("the sum of first 10 natural numbers is %d\n", sum);
    return 0;
}
