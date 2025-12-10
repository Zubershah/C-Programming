#include <stdio.h>
void swap(int*, int*);
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 4, b = 6;
    printf("the value of a is %d and b is %d\n", a, b);

    swap(&a, &b);
    printf("the value of a is %d and b is %d\n", a, b);
    return 0;
}