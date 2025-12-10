#include <stdio.h>
int change(int a);
int change(int a)
{
    a = 77; // Misnomer
    printf("the value of function is %d\n", a);
    return 0;
}
int main()
{
    int b = 22;           // The value of b remains 22
    change(b);            // passing the value of b
    printf("b is %d", b); // b is 22
    return 0;
}
