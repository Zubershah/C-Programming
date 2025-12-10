/*
Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/
#include <stdio.h>
int main()
{
    float p = 34.1, r = 7.6;
    int y = 5;
    printf("The value of simple interest is %f", (p * r * y) / 100);
    return 0;
}