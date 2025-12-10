#include <stdio.h>
int main()
{
    /*int to int = int*/
    int a = 9, b = 2;
    float c = a / b;                       // 4.5
    printf("the value of a/b is %f\n", c); // 4.0

    /*int to float or float to int = float*/
    int d = 9;
    float e = 2.0, f = d / e;              // 4.5
    printf("tha value of d/e is %f\n", f); // 4.5

    /*float to float = float*/
    float x = 9.5, y = 2.8, z;
    z = x / y;                             // 3.39
    printf("the value of x/y is %f\n", z); // 3.39

    int h = 3.5;
    printf("the value of h is %d\n", h); // 3

    float i = 2;
    printf("tha valu of i is %f\n", i); // 2.0

    int k = 3.0 / 9;                    // 0.33
    printf("tha value odf k is %d", k); // 0
    return 0;
}
