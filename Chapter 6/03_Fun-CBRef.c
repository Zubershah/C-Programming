#include <stdio.h>
int sum(int*, int*);
int sum(int* a, int* b)
{
    *a = 5; // changes the value of x in main 
    return *a + *b;
}
int main()
{
    int x = 4, y = 6;

    printf("the sum is %d\n", sum(&x, &y));
    printf("the value of x is %d\n", x);
    printf("the value of y is %d\n", y);
    return 0;
}