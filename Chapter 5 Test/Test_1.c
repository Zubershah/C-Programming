/*
Write a program using function to find average of three numbers.
*/
#include <stdio.h>
float Average(float, float, float);
float Average(float x, float y, float z)
{
    float v = (x + y + z) / 3;
    return v;
}
int main()
{
    float a = 50, b = 60, c = 80;

    printf("the average of three numbers are %f\n", Average(a, b, c));
    return 0;
}