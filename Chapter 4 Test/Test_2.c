/*
Write a program to print multiplication table of 10 in reversed order.
*/
#include <stdio.h>
int main()
{
    int n = 7, i = 10;

    while (i >= 1)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i--;
    }
    return 0;
}