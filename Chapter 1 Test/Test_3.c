/*
Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/
#include <stdio.h>
int main()
{
    // area of circle = pie * r^2
    // volume of cylinder = pie * r^2 * h
    float pie = 3.14;
    int r = 2, h = 10;
    printf("The area of circle with radius %d is %f\n", r, pie * (r * r));
    printf("The volume of cylinder with radius %d and height %d is %f\n", r, h, pie * (r * r) * h);
    return 0;
}
