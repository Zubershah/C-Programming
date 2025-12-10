/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/
#include <stdio.h>
int main()
{
    int n = 8, sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += (n * i);
    }
    printf("the sum of number occuring in the table multiplication table of 8 is %d", sum);
    return 0;
}