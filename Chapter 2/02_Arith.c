#include <stdio.h>
int main()
{
    int a = 4;
    int b = 3;
    int c = a + b; // a+b=c; this is invalid
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b; // % --> is a remainder and cannot be applied to float

    printf("the value of a is %d and value of b is %d and sum is %d\n", a, b, c);
    printf("the value of a is %d and value of b is %d and Diference is %d\n", a, b, d);
    printf("the value of a is %d and value of b is %d and Multipication is %d\n", a, b, e);
    printf("the value of a is %d and value of b is %d and division is %d\n", a, b, f);
    printf("the value of a is %d and value of b is %d and remainder is %d\n", a, b, g);
    return 0;
}
