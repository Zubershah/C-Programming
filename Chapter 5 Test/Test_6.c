/*
Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
#include <stdio.h>
int sum(int);
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum(n - 1) + n;
}
int main()
{
    int n = 8;

    printf("the sum of first %d natural numbers are %d\n", n, sum(n));
    return 0;
}
// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36;