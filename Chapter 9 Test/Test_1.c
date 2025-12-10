/*Create a two-dimensional vector using structures in C*/
#include <stdio.h>

struct vector
{
    int i;
    float j;
};

int main()
{
    struct vector v = {1, 2.53};
    printf("the value of vector is %di + %fj\n", v.i, v.j);

    return 0;
}