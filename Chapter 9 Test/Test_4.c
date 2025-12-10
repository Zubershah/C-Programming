/*Write a program with a structure representing a complex number. */

#include <stdio.h>

typedef struct Complex
{
    int i;
    float j;
} E;

int main()
{
    E num = {34, 0.342};
    printf("the value of complex number is %d +- %0.3fj\n", num.i, num.j);

    return 0;
}