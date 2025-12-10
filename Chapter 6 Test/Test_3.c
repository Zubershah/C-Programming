/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the address of sum and average function.
*/
#include <stdio.h>
float Sum(float, float);
float Sum(float x, float y)
{
    float sum = x + y;
    float* ptr = &sum;

    printf("the address of sum pointer is %u\n", ptr);
    return sum;
}
float Average(float, float);
float Average(float x, float y)
{
    float A = (x + y) / 2.0;
    float* ptr = &A;

    printf("the address of average pointer is %u\n", ptr);
    return A;
}
int main()
{
    float a = 4.5, b = 6.25;
    float s = Sum(a, b);
    float Avg = Average(a, b);

    printf("the sum is %f\n", s);
    printf("the average is %f\n", Avg);
    return 0;
}
