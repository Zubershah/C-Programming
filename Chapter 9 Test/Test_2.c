/*Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.*/
#include <stdio.h>

struct vector
{
    int i;
    float j;
};

struct vector sumVector(struct vector a1, struct vector a2)
{
    struct vector a3 = {a1.i + a2.i, a1.j + a2.j};
    return a3;
};

int main()
{
    struct vector v1 = {1, 2.37};
    struct vector v2 = {3, 4.45};
    struct vector v3 = sumVector(v1, v2);

    printf("the value of v3 is %di +%fj\n", v3.i, v3.j);

    return 0;
}