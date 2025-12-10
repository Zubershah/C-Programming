/* 
Write a C program to calculate area of a rectangle 
Using inputs supplied by the user.
*/
#include <stdio.h>
int main()
{
    float length, breadth;
    printf("length is\n");
    scanf("%f", &length);
    printf("Breadth is\n");
    scanf("%f", &breadth);
    printf("The area of rectangle is %f", length * breadth);
    return 0;
}