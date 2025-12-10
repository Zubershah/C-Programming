#include <stdio.h>
int main()
{
    int i = 20;
    printf("the value of i is %d\n", i); // 20
    i += 2;                              // i=i+2
    printf("the value of i is %d\n", i); // 22

    int j = 20;
    printf("the value of i is %d\n", j); // 20
    j -= 2;                              // j=j-2;
    printf("the value of i is %d\n", j); // 18

    int k = 20;
    printf("the value of i is %d\n", k); // 20
    k *= 2;                              // k=k*2;
    printf("the value of i is %d\n", k); // 40

    int h = 20;
    printf("the value of i is %d\n", h); // 20
    h /= 2;                              // h=h/2;
    printf("the value of i is %d\n", h); // 10

    int l = 20;
    printf("the value of i is %d\n", l); // 20
    l %= 2;                              // l=l%2;
    printf("the value of i is %d\n", l); // 0
    return 0;
}