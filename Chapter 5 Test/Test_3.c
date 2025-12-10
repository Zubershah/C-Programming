/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8 m/s^2.
*/
#include <stdio.h>
float weight(float);
float weight(float x)
{
    return x * 9.8;
}
int main()
{
    float m = 45;

    printf("the force attraction on a body exerted by earth is %f\n", weight(m));
    return 0;
}